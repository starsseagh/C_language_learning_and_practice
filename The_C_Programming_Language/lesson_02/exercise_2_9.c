/*
 * @Date: 2023-01-15 13:16:18
 * @LastEditTime: 2023-01-15 17:05:17
 * @Description: 在求对二补码时，表达式x &= (x-1)可以删除x中最右边值为1的一个二进制位。
 * 用这一方法重写bitcount函数，以加快其执行速度。
 */

/*
 * 二进制只有0和1，一个二进制数在减1时，如果最低位是1，则减1后这一位变为0，而其余位不变；
 * 当最低位是0时，由于要借位，这时需要找到最右边的1进行借位，导致这一位变为0，这一位之后的位都变为1；
 * 然后再和原数据与得到1010000，这样就能看到新的数把最右边的1消除了。
 */

/* 原始的bitcount */
int bitcount(unsigned int x)
{
    int b;
    for ( b = 0; x != 0; x >>= 1)
    {
        if(x & 1)
            b++;
    }
    return b;    
}

/* bitcount: count 1 bits in x - faster version */
int bitcount(unsigned x)
{
    int b;
    for(b = 0; x != 0; x &= (x-1))
        ++b;
    return b;
}
