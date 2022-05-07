// Copyright Epic Games, Inc. All Rights Reserved.

#include "JS_ProjectGameMode.h"
#include "JS_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

//#pragma comment(lib,"ws2_32")

#include <WinSock2.h>
#include <WS2tcpip.h>

AJS_ProjectGameMode::AJS_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;


		//--------------------------------------------------- 
		// 1. WinSock Init
		//--------------------------------------------------- 

		WSADATA wsa;
		if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
			return;




		//--------------------------------------------------- 
		// 2. socket
		//--------------------------------------------------- 

		SOCKET _socket = socket(AF_INET, SOCK_STREAM, 0);
		if (_socket == INVALID_SOCKET)
		{
			return;
		}




		//--------------------------------------------------- 
		// 3. IP : Port Setting
		//--------------------------------------------------- 

		SOCKADDR_IN		_serverAddr;
		_serverAddr.sin_family = AF_INET;
		InetPton(AF_INET, L"127.0.0.1", &_serverAddr.sin_addr);
		_serverAddr.sin_port = htons(10001);




		//--------------------------------------------------- 
		// 4. connect
		//--------------------------------------------------- 

		for (;;)
		{
			if (connect(_socket, (SOCKADDR*)&_serverAddr, sizeof(_serverAddr)) == SOCKET_ERROR)
			{
				int a = 0;
				a++;
			}
			else
				break;
		}


		// Nonblock 소켓으로 변경
		ULONG isNonBlocking = 1;
		ioctlsocket(_socket, FIONBIO, &isNonBlocking);


		for (;;)
		{

		}
	}
}
