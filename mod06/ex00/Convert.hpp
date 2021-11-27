#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>

bool	is_char(const std::string &s, char *d);
bool	is_int(const std::string &s, int *i);
bool	is_float(const std::string &s, float *f);
bool	is_double(const std::string &s, double *d);
bool	is_non(const std::string &s);

void	print_char(char c);
void	print_int(int i);
void	print_float(float f);
void	print_double(double d);
void	print_non(const std::string &str);

#endif
