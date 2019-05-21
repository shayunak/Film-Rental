#include "Admin.h"
#include "Mininet.h"
#include "Security.h"
#include <iostream>
using namespace std;

Admin::Admin(string password , MiniNet* miniNetAccess) : Customer(ADMIN_DEFAULT_USERNAME , password , "" , 0 , 0) {
	this->miniNetAccess = miniNetAccess;
}

void Admin::showCredit() const{
	cout << miniNetAccess->getTotalNetCredit() << endl;
}	
