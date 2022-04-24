# Bitwise Operators

> Operates on binary representation of data.\
> They are faster than normal operations.

### Binary And &

> 0&1 = 0\
> 1&0 = 0\
> 0&0 = 0\
> 1&1 = 1\
> 5&7 => 0000101 & 0000111 = 0000101 = 5

### Binary Or |

> 0|1 = 1\
> 1|0 = 1\
> 0|0 = 0\
> 1|1 = 1\
> 5|7 => 0000101 | 0000111 = 0000111 = 7

### Binary XOR ^ - Exclusive OR - If both are on or both are off - then result will be off

> 0^1 = 1\
> 1^0 = 1\
> 1^1 = 0\
> 0^0 = 1\
> 5^7 => 0000101 ^ 0000111 = 0000010 = 2

### Binary Left Shift <<

> Moves bits to left by few digits and adds 0 in newer positions.\
> 5<<2 => 0000101 << 2 = 0010100 = 20 (5*(2**2))\
> 5<<1 => 0000101 << 1 = 0001010 = 10 (5*(2**1))

### Binary Right Shift >>

> Moves bits to right by few digits and adds 0 in newer positions.\
> 8>>2 => 0001000 >> 2 = 0000010 = 2 (8/(2**2))\
> 8>>1 => 0001000 >> 1 = 0000100 = 4 (8/(2**1))

### Binary One's Compliment ~ - Inverts all the bits including most significant bit

> ~0 = 1\
> ~1 = 0\
> ~5 = ~(0000101) = 1111010 (is negative number since it changes sign bit also)\

>  0 = 0|0000000000000000000000000000000 (32 bits)\
> ~0 = 1|1111111111111111111111111111111 (32 bits)\
>    = 1|0000000000000000000000000000000\
>    + 0|0000000000000000000000000000001\
>    = 1|0000000000000000000000000000001\
>    = -1\
> Thus, 0's compliment is -1.
