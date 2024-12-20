
#pragma once

#define BANK_HPP

#include <string>
#include <map>

class Bank {
	private:
		/* Account Class */
		class Account{
			private:
				int id;
				int	value;
				friend class Bank;
			public:
				Account(void);
				Account(const Account &src);
				Account &operator=(const Account &src);
				~Account(void);
				
				const int	&getValue() const;
				const int	&getId() const;
		};
		/* Attribute Bank */
		static int	nextId;
		float		liquidity;
		std::map <int, Account>	clientsAccounts;
	public:
		const float	&getLiquidity() const;
		const Account &operator[](int id) const;
		const 
};

int Bank::nextId = 0;