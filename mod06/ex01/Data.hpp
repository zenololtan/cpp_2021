#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		/*--------------------------Member variables--------------------------*/
		std::string	_Message;

	public:
		/*----------------------------Coplien form----------------------------*/
		Data();
		Data(std::string str);
		Data(const Data &ref);
		Data&		operator=(const Data &ref);
		~Data();

		/*--------------------------Member functions--------------------------*/
		std::string	getMessage() const { return _Message;};
};

std::ostream&	operator<<(std::ostream &out, const Data &ref);

#endif
