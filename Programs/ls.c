#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

// struct dirent {
//     ino_t          d_ino;       /* Inode number */
//     off_t          d_off;       /* Not an offset; see below */
//     unsigned short d_reclen;    /* Length of this record */
//     unsigned char  d_type;      /* Type of file; not supported
//                                     by all filesystem types */
//     char           d_name[256]; /* Null-terminated filename */
// };

int main(int argc, char *argv[]){
    DIR *dp;

    struct dirent *dirp;

    if(argc < 2){
        printf("\n You have provided only 1 argument \n");
        return -1;
    }
    dp = opendir(argv[1]);
    if(dp == NULL){
        printf("\n Cannot open %s file!\n", argv[1]);
        return -1;
    }
    dirp = readdir(dp);
    while (dirp != NULL)
    {
        printf("%s\n", dirp->d_name);
        dirp = readdir(dp);
    }
    closedir(dp);
}