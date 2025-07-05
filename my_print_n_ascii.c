void print_char(char c);

void my_print_n_ascii(int howmany)
{
    for (int i = 33; i <howmany + 33; ++i){
        print_char(i);
    }
}


int main(void)
{
    my_print_n_ascii(5);
    return 0;
}

