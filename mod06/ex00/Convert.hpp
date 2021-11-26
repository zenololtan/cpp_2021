#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

enum Types {NONE = 0, INT = 1, CHAR = 2, FLOAT = 3, DOUBLE = 4};

class Convert
{
	private:
		/*--------------------------Member variables--------------------------*/
		int			_Int;
		char		_Char;
		float		_Float;
		double		_Double;
		std::string	_None;
		Types		_Type;

	public:
		/*----------------------------Coplien form----------------------------*/
		Convert() : _Int(0), _Char(0), _Float(0), _Double(0), _None(""), _Type(NONE){};
		Convert(const Convert &ref);
		Convert&	operator=(const Convert &ref);
		~Convert();

		/*--------------------------Member functions--------------------------*/
		Convert(int integer);
		Convert(char character);
		Convert(float floating_p);
		Convert(double double_n);
		Convert(std::string none);

		int			getInt() const { return _Int; };
		char		getChar() const { return _Char; };
		float		getFloat() const { return _Float; };
		double		getDouble() const { return _Double; };
		std::string	getNone() const { return _None; };
		Types		getType() const { return _Type; };
};

std::ostream&	operator<<(std::ostream &out, const Convert &ref);

bool	is_char(const std::string &s, char *d);
bool	is_int(const std::string &s, int *i);
bool	is_float(const std::string &s, float *f);
bool	is_double(const std::string &s, double *d);

#endif
