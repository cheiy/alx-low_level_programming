
void jack_bauer(void)
{
	int hr;
	int min;
	hr = 0;
	min  = 0;
	while (hr <= 24)
	{	
		while( min < = 59)
		{
			_putchar(( hr / 10 ) + '0');
			_putchar(( hr % 10 ) + '0');
			_putchar(':');
			_putchar(( min / 10 ) + '0');
			_putchar(( min % 10 ) + '0');
			_putchar('\n');
			min++;
		}
		hr++;
	}
}
