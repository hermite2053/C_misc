# ANSI escape

## color

### file

color/main.c

### abstract

To flash ANSI color, use `\e[XXm` where XX is numbers such that
satisfies 30 <= XX <= 37 or 40 <= XX <= 47.

### example

If we write below code:

```
printf("\e[31mERROR!!\e[0m\n");
```

the flashes should be <font color="Red">ERROR!!</font> in case
terminal supports ANSI color.

## letter

### file

letter/main.c

### abstract

To set display attributes, use `\e[XXm` where XX is numbers such that
statisfies 0 <= XX <= 8.

### example

If we write below code:

```
printf("\e[3mItalic\e0m\n");
```

the flashes should be *Italic* in case
terminal supports ANSI color.
