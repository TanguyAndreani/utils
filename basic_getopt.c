char basic_getopt(int ac, char *av[])
{
    static int i = 0, j = 1;

    if (i >= ac)
        return (-1);

    if (!av[i][j]) {
        j = 1;
        i++;
        return (basic_getopt(ac, av));
    }

    if (av[i][0] == '-') {
        char c = av[i][j++];
        return (c);
    }

    i++;
    return (basic_getopt(ac, av));
}