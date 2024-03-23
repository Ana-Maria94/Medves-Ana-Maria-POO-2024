#include "pch.h"
#include "pch.h"
#include "CreditCardAccount.h"

using namespace System;

int main()
{
	Console::WriteLine("Creating an account object");
	CreditCardAccount^ account10;

	int n = CreditCardAccount::GetNumberOfAccounts();
	Console::WriteLine("Number of accounts now: {0}", n);
	Console::WriteLine("Card name: {0}", CreditCardAccount::name);

	account10 = gcnew CreditCardAccount(878, 1500);
	Console::WriteLine("\nMaking a purchase");
	account10->MakePurchase(300);
	Console::WriteLine("\nMaking a purchase");
	account10->MakePurchase(700);
	Console::WriteLine("\nMaking a purchase");
	account10->MakePurchase(500);
	Console::WriteLine("\nRedeeming points");
	account10->RedeemLoyalityPoints();

	Console::ReadKey();

	return 0;
}