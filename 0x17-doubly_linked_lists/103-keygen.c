#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *username;
    char key[7];
    int len;

    if (argc != 2)
    {
        printf("Usage: %s <username>\n", argv[0]);
        return 1;
    }

    username = argv[1];
    len = strlen(username);

    key[0] = (username[0] ^ len) & 0xFF;
    key[1] = (username[1] + len) & 0xFF;
    key[2] = (username[2] ^ 0x55) & 0xFF;

    key[6] = '\0';

    printf("%s\n", key);

    return 0;
}
