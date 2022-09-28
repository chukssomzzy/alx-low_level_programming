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

## rev print char

```C
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion((s + 1));
_putchar(*s);
}
}
```

## find string len

love them when there is a return 
```c
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion((s + 1)));
}
```
## factorial

a little bit of math
```c
int factorial(int n)
{
	if (n == 0)
		return (1);
	return n * factorial(n - 1);
}
```


