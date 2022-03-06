#include<stdio.h>
int a[10000]; // predefined array

void initArray(){
    for (int i = 0; i < 10000; i++)
    {
        a[i] = -1; // -1 means empty
    }
}

void insert(int x){
    int i = 1;
    while(1){
        int l = 2*i;
        int r = 2*i+1;

        if(a[i] == -1){
            a[i] = x;
            //printf("%d inserted at %d\n",x,  i);
            break;
        }else if(x < a[i]){ // x will be a left child
            i = l;
        }else{ // otherwise x will be right child
            i = r;
        }
    }
}


void inoderprint(int parent){
    if(a[parent] == -1)
        return;

    inoderprint(2*parent); // left
    printf("%d ", a[parent]); // parent
    inoderprint(2*parent + 1); // right;
}

void preoderprint(int parent)
{
    if (a[parent] == -1)
        return;

    printf("%d ", a[parent]);    // parent
    preoderprint(2 * parent);    // left
    preoderprint(2 * parent + 1); // right;
}

void postoderprint(int parent)
{
    if (a[parent] == -1)
        return;

    postoderprint(2 * parent);            // left
    postoderprint(2 * parent + 1);        // right;
    printf("%d ", a[parent]);    // parent
}

void delete(int parent, int x){
    if(a[parent] == -1){

        return;
    }

    if(a[parent] == x){ // x is found
       // printf("%d is found at index %d\n", x, parent);
        int l = 2*parent;
        int r = 2*parent+1;
        if(a[l] == -1){
            a[parent] == a[r];
            return;
        }else if(a[r] == -1){
            a[parent] == a[l];
            return;
        }

        // else find the next max from the two sub-tree
        int temp = 2*parent+1;
        while(a[2*temp]!=-1){
            temp = 2*temp;
        }
        //printf("next max at %d\n", temp);
        a[parent] = a[temp];
        a[temp] = -1;
        return;
    }else if(x < a[parent]){
        delete(2 * parent, x); // x is in left sub tree
    }else{
        delete(2*parent+1, x); // x is in right sub tree
    }
}


int main(){
    /* initArray();

    insert(100);
    insert(20);
    insert(200);
    insert(10);
    insert(30);
    insert(150);
    insert(300);


    inoderprint(1);
    printf("\n");
    preoderprint(1);
    printf("\n");
    postoderprint(1);
    printf("\n");

    delete(1, 200);
    inoderprint(1); */
    int option;
    scanf("%d", &option);

    initArray();

    printf("Instructions: 1)insert  2)delete 3)inorder 4)preorder 5)postorder 6)exit\n");
    while(1){
        printf("Enter an option: ");
        scanf("%d", &option);

        if(option == 1){
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);
            insert(x);
        }else if(option == 2){
            int x;
            printf("Enter a number: ");
            scanf("%d", &x);
            delete(1, x);
        }else if(option == 3){
            inoderprint(1);
            printf("\n");
        }else if(option == 4){
            preoderprint(1);
            printf("\n");
        }else if(option == 5){
            postoderprint(1);
            printf("\n");
        }else{
            break;
        }
    }
}