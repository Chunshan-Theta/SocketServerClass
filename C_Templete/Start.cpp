#include "SocketServer.h"
#include <string>
#include <iostream>
#include <thread>



SocketServer a;

void test_func()
{
	cout << "Start Loop Listen\n" << endl;
	a.StartLoopListen();
}

int main() {

	
	thread mThread(test_func);
	
	cout << "notice:close Loop Listen after 10 seconds" << endl;
	
	Sleep(10000);
	cout << "notice:close Loop\n" << endl;
	a.KillLoopListen();
	

	mThread.join();
	
	
	system("Pause");



	return 0;

}


