# 🖨️ Ft_printf: A Lite Version of Printf in C

Ft_printf replicates the behavior of standard printf, minus buffer management.

## 📊 Supported Formats

| Format | Description |
|--------|-------------|
| `%c`   | Write character |
| `%s`   | Write string |
| `%p`   | Write pointer address |
| `%d`   | Write integer |
| `%i`   | Write integer (differs from %d when used with scanf) |
| `%u`   | Write unsigned integer |
| `%x`   | Write lowercase hexadecimal of an unsigned integer |
| `%X`   | Write uppercase hexadecimal of an unsigned integer |
| `%%`   | Write % character |

## 🛠️ Implementation Details

- Uses `va_list` to handle variable arguments
- Prototype: `int ft_printf(const char *, ...);`
- Iterates through input string, processing format specifiers
- Returns the length of the formatted output

## 🆕 New Concepts

### 1. Va_list Magic ✨

```c
va_list args;
va_start(args, str);
// Use va_arg(args, type) to access arguments
va_end(args);
```

### 2. Hexadecimal Conversion 🔢

Similar to decimal to ASCII conversion, but with base 16:

```c
nbr / 16
nbr % 16
```

## 💡 Key Insight

When passing `va_list` to helper functions, use the address:

```c
ft_format(&args, str[++i]);
```

And in the helper function:

```c
void ft_format(va_list *args, const char format)
{
    ft_write_string(va_arg(*args, char *));
}
```

## 🧪 Testing

Testing is crucial! Stay tuned for some awesome test cases to ensure your ft_printf is rock-solid.

