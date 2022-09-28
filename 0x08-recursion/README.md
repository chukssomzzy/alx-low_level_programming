# RECURSION

If it elegant, requires less code then it recursive 😂


## put char recursive cus you can

```C
void _puts_recursion(char *s)
{
    if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	} else
		_putchar('\n'); 
}
```

