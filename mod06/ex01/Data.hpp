#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		/*--------------------------Member variables--------------------------*/
		int			_Int;
		char		_Char;
		std::string	_Message;
		const char	*_Str_c;

	public:
		/*----------------------------Coplien form----------------------------*/
		Data();
		Data(const Data &ref);
		Data&		operator=(const Data &ref);
		~Data();

		/*--------------------------Member functions--------------------------*/
		int			getI() const { return _Int;};
		char		getC() const { return _Char;};
		std::string	getMessage() const { return _Message;};
		const char	*getStr() const { return _Str_c;};
};

std::ostream&	operator<<(std::ostream &out, const Data &ref);
uintptr_t	 	serialize(Data* ptr);
Data*			deserialize(uintptr_t raw);

#endif
