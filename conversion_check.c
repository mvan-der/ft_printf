int	conversion_check(char *input)
{
	if (input == 'c')
		conversion_c();
	if (input == 's')
		conversion_s();
	if (input == 'p')
		conversion_p();
	if (input == 'd')
		conversion_d();
	if (input == 'i')
		conversion_i();
	if (input == 'u')
		conversion_u();
	if (input == 'x')
		conversion_x();
	if (input == 'X')
		conversion_X();
	if (input == '%')
		ft_putchar ('%');
}

char	conversion_c(?) //??what to pass from ft_printf to conversion_check to pass to conversion_c? This method is too complicated I guess..
{

}
// c (single char)

// s (string)

// p (void * pointer in hex)

// d (decimal number)

// i (integer)

// u (unsigned decimal)

// x (print number in hex, lowercase)

// X (print number in hex, uppercase)

// % (print % char)
