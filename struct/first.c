#include <stdio.h>
// struct 1
struct Player
{
    char name[20];
    int score;
    /* data */
};
// TYPEDEF ==============================
typedef char name[25];
// 2 using struct 
typedef struct 
{
    /* data */
    char username[25];
    char password[25];
    int id;
} User;
// ====================================================================

int main(){
    
    // STRUCT = collection of realted variable
    //          the can be different data type
    //          listed under one name in block of memory
    //          very similar to class in other object with no methods
    struct Player player1;
    struct Player player2;
    player1.score=9;
    printf("%d\n",player1.score);
    // ===========================================
    // typedef - is a keyword that reserve existing datatype and make code simple 
    // EXAMPLE
    name name1="riyaz";
    // EXAMPLE 2 
    // instead using struct User user1 ={"name","password",id}
    User user1 ={"riyaz","123",1};
// ============================================================================
// array of structs
    User user2 = {"fayaz","1234",2};
    User user3 = {"fayaz","1334",3};
    User user4 = {"fayaz","1434",4};
    User users[]={user1,user2,user3,user4};

    for(int i =0;i<sizeof(users)/sizeof(user1);i++){
        scanf("%d\n",users[i].username);
        printf("%-5s\n",users[i].username);
    };
    
    return 0;
}


/*
a0 a1 a2 a3 a4
a0 a1 a2 a3
a0 a1 a2
a0 a1
*/