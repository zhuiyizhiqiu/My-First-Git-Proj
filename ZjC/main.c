//
//  main.c
//  ZjC
//
//  Created by 彭军涛 on 2018/2/9.
//  Copyright © 2018年 彭军涛. All rights reserved.
//
//
//#include <stdlib.h>
//#include <stdio.h>
//typedef int ElemType;
//typedef struct Tree{
//    ElemType data;
//    struct Tree *lchild;
//    struct Tree *rchild;
//}TreeNode, *TNode;
//
////swift class 初始化了一个实例，.获取的属性对吧，如果你要造一辆车，你是不是要先有图纸，有了图纸，你才能造出一辆车，这个车就叫做实例，图纸中有轮子之类的属性，所以你这个车是不是也有轮子这个属性，
//int InsertTree(TNode *root,ElemType data){
//    TNode r,s, pre;
//    //TreeNode* == TNode
//    r = (TNode)malloc(sizeof(TreeNode));
//    r->data = data;
//    r->lchild = NULL;
//    r->rchild = NULL;
//    if (*root == NULL) {
//        *root = r;
//        return 1;
//    }
//    pre = NULL;
//    s = *root;

//明明是我太帅了，难瘦，。。。。。。。。。。。。。。。。。。。。。。。。。。
//
//    //logn 18 都还没有发育好。。。。 起码要得到20以后吧 心太急了。。。。有毒，那根本就不是谈恋爱呀，就是为了（约炮吧）。。。。。对吧 你自己说才10几天就。。。。。。，很明显就是约炮呀，完事之后就。。。。。态度180度大转弯呀，然后去找下一个呀。。。。。怎么也得认识或者在一起半年以后吧。。。。。
//    while (s) {
//        if (data == s->data) {
//            return 0;
//        }else if(data < s->data){
//            pre = s;
//            s = s->lchild;
//        }else{
//            pre = s;
//            s = s->rchild;
//        }
//    }
//
//    if (data < pre->data) {
//        pre->lchild = r;
//    }else{
//        pre->rchild = r;
//    }
//    return 1;
//}
//
//TNode FindMin(TNode root){
//    if (root == NULL) {
//        return NULL;
//    }else if (root->lchild == NULL){
//        return root;
//    }else
//        return FindMin(root->lchild);
//}
//void InOrder(TNode root){
//    if (root != NULL) {
//        InOrder(root->lchild);
//        printf("%d ",root->data);
//        InOrder(root->rchild);
//    }
//}
//
//TNode Detel(TNode *root,ElemType x){
//    TNode r;
//    r = *root;
//    if (!r) {
//        printf("erroe");
//        return  NULL;
//    }if (x < r->data) {
//        r->lchild = Detel(r->lchild, x);
//    }else if (x > r->data){
//        r -> rchild = Detel(r->rchild, x);
//    }else{
//        if (r->lchild && r->rchild) {
//            TNode tmp = r->rchild;
//            while (tmp ->lchild != NULL) {
//                tmp = tmp -> lchild;
//            }
//            r->data = tmp->data;
//            r->rchild = Detel(r->rchild, tmp->data);
//        }else{
//            TNode tem = r;
//            if (!r->lchild) {
//                r = r->rchild;
//            }else if (!r->rchild){
//                r = r->lchild;
//            }
//            free(tem);
//        }
//    }
//    return  r;
//}
//void Detel(TNode *root,ElemType x){
//    TNode r,pre,temp,prT;
//    r = *root;
//    //pre = *root;
//    if (r == NULL) {
//        printf("%d不存在\n",x);
//        return;
//    }else{
//        while (r->data != x && r != NULL) {
//            if (x < r->data) {
//                pre = r;
//                r = r -> lchild;
//            }else if (x > r -> data){
//                pre = r;
//                r = r -> rchild;
//            }
//            printf("x = %d\n",x);
//        }
//        printf("r->data = %d\n",r->data);
//        if (r ->lchild && r ->rchild) {
//            temp = r->rchild;
//            prT = temp;
//            while (temp -> lchild) { //寻找左子树最小值
//                prT = temp;
//                temp = temp->lchild;
//            }
//            r -> data = temp -> data;
//            prT->lchild = temp->rchild;
//            free(r);
//
//        }else {
//            TNode ty = r;
//            if(!(r -> lchild)){
//            r = r->rchild;
//        }else if (!(r->rchild)){
//            r = r -> lchild;
//
//            }
//            free(ty);
//        }
//    }
//    InOrder(*root);
//
//}

//TNode DetelX(TNode *root,ElemType x){
//
//    TNode r,pre;
//    r = *root;
//    if (r == NULL) {
//        Error();
//    } else if (x < r->data){
//        r->lchild = DetelX(&(r->lchild), x);
//    }else if (x > r->data){
//        r->rchild = DetelX(&(r->rchild), x);
//    }else if(r->lchild && r->rchild){
//        pre = FindMin(r->rchild);
//        r->data = pre->data;
//        r->rchild = DetelX(&(r->rchild), x);
//    }else{
//        pre = r;
//        if (r->lchild == NULL) {
//            r = r->rchild;
//        }else if(r->rchild == NULL){
//            r = r->lchild;
//        }
//
//        free(pre);
//    }
//
//    return r;
//}
//
//void CreatTree(TNode *root){
//    ElemType data;
//    *root = NULL;
//    scanf("%d",&data);
//    while (data != -1) {
//        InsertTree(root, data);
//        scanf("%d",&data );
//    }
//}
//
//
//int main(){
//    TNode T = NULL;
//    ElemType n;
//    printf("建立二叉树，输入-1结束\n");
//    CreatTree(&T);
//    printf("中序遍历二叉树，序列为：\n");
//    InOrder(T);
//    printf("\n");
//    printf("输入删除元素n = ");
//    scanf("%d",&n);
//    printf("ok");
//    printf("\n");
//    Detel(&T, n);
//    InOrder(T);
//    printf("\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct treeNode{
//    int date;
//    struct treeNode* lchild;
//    struct treeNode* rchild;
//}*trnode,Tnode;
//
//trnode newNode(int v){
//    trnode root = (trnode)malloc(sizeof(Tnode));
//    root -> date = v;
//    root -> lchild = NULL;
//    root -> rchild = NULL;
//    return root;
//}
//
//void insert(trnode *root,int x){
//    trnode s,pre;
//    if( *root == NULL ){
//        *root = newNode(x);
//    }
//    else{
//        s = *root;
//        pre = NULL;
//        while( s ){
//          　printf("x = %d\n",x);
//            if( x == s -> date) return;
//            if( x > s-> date){
//                pre = s;
//                s = s -> rchild;
//
//            }
//            else{
//                pre = s;
//                s = s -> lchild;
//            }
//        }
//        if( x > pre -> date ){
//            pre -> rchild = newNode(x);
//        }
//        else {
//            pre -> lchild = newNode(x);
//        }
//    }
//}
//
///*void creat(trnode* root){
// int n;
// scanf("%d",&n);
// while( n != -1){
// insert(root,n);
// scanf("%d",&n);
// }
// }*/
//
//void inOrder(trnode root){
//    if (root != NULL) {
//        inOrder(root -> lchild);
//        printf("%d ",root -> date);
//        inOrder(root -> rchild);
//    }
//}
//
//int main(){
//
//    int n;
//        trnode root;
////    int count = 1;
//    printf("-1 is the end of input\n");
//    printf("Creat the tree:\n");
//    scanf("%d",&n);
//    while( n != -1){
//        printf("n = %d\n",n);
//        insert(&root,n);
//        scanf("%d",&n);
//    }
//
//    printf("Print root in thr middle\n");
//    inOrder(root);
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct treeNode{
//    int date;
//    struct treeNode* lchild;
//    struct treeNode* rchild;
//}*trnode,Tnode;
//
//trnode newNode(int v){
//
//    trnode root = (trnode)malloc(sizeof(Tnode));
//    root -> date = v;
//    root -> lchild = NULL;
//    root -> rchild = NULL;
//
//    return root;
//}
//void insert (trnode *root,int x){
//    trnode pre,s;
//    if(*root == NULL){
//        *root = newNode(x);
//    }
//    else{
//        s = *root;
//        pre = NULL;
//        while(s){
//            //printf("x = %d\n",x);
//            if(x == s -> date) return;
//            if(x > s -> date){
//                pre = s;
//                s = s -> rchild;
//            }
//            else{
//                pre = s;
//                s = s -> rchild;
//            }
//        }
//        if( x > pre ->date){
//            pre -> rchild = newNode(x);
//        }
//        else{
//            pre ->lchild = newNode(x);
//        }
//    }
//}
//
//void inOrder(trnode root){
//    if(root != NULL){
//        inOrder(root -> lchild);
//        printf("%d ",root -> date);
//        inOrder(root -> rchild);
//    }
//}
//
//int main(){
//    int n;
//    int count = 1;
//    printf("建立二叉树，输入-1结束\n");
//    trnode root;
//    scanf("%d",&n);
//    while(n != -1){
//        //printf("count = %d\n",count);
//        insert(&root,n);
//        scanf("%d",&n);
//    }
//    inOrder(root);
//    printf("\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct treeNode{
//    int date;
//    struct treeNode* lchild;
//    struct treeNode* rchild;
//}*trnode,Tnode;
//
//trnode newNode(int v){
//    trnode root = (trnode)malloc(sizeof(Tnode));
//    root -> date = v;
//    root -> lchild = NULL;
//    root -> rchild = NULL;
//    return root;
//}
///*trnode newNode(int v){
//
// trnode root = (trnode)malloc(sizeof(Tnode));
// root -> date = v;
// root -> lchild = NULL;
// root -> rchild = NULL;
//
// return root;
// }*/
//
//void insert(trnode *root,int x){
//    trnode s,pre;
//    if( *root == NULL ){
//        *root = newNode(x);
//    }
//    else{
//        s = *root;
//        pre = NULL;
//        while( s ){
//            if( x == s -> date) return;
//            if( x > s-> date){
//                pre = s;
//                s = s -> rchild;
//            }
//            else{
//                pre = s;
//                s = s -> lchild;
//            }
//        }
//        if( x > pre -> date ){
//            pre -> rchild = newNode(x);
//        }
//        else {
//            pre -> lchild = newNode(x);
//        }
//    }
//}
//
///*void insert (trnode *root,int x ){
// trnode pre,s;
// if(*root == NULL ){
// // printf("ok\n");
// *root = newNode(x);
// }
// else{
// s = *root;
// pre = NULL;
// while(s) {
// //printf("x = %d\n",x);
// if( x == s -> date) return;
// if( x > s -> date ){
// pre = s;
// s = s -> rchild;
// }
// else{
// pre = s;
// s = s -> lchild;
// }
// }
// if( x > pre -> date ){
// pre ->rchild = newNode(x);
// }
// else{
// pre -> lchild = newNode(x);
// }
// }
// }*/
//
///*void creat(trnode* root){
// int n;
// scanf("%d",&n);
// while( n != -1){
// insert(root,n);
// scanf("%d",&n);
// }
// }*/
//
//void inOrder(trnode root){
//    if (root != NULL) {
//        inOrder(root -> lchild);
//        printf("%d ",root -> date);
//        inOrder(root -> rchild);
//    }
//}
//
//
///*void inOrder(trnode root){
// if (root != NULL) {
// inOrder(root -> lchild);
// printf("%d ",root -> date);
// inOrder(root -> rchild);
// }
//
// }*/
//
//int main(){
//    int n;
//    trnode root;
//
//    printf("-1 is the end of in \n");
//    printf("Creat the tree:\n");
//    scanf("%d",&n);
//    while(n!=-1){
//        insert(&root,n);
//        scanf("%d",&n);
//    }
//    printf("Print root in thr middle\n");
//    inOrder(root);
//    printf("\n");
//    return 0;
//}


/*int main(){
 int n;
 trnode root;
 scanf("%d",&n);
 while(n!=-1){
 insert(&root,n);
 scanf("%d",&n);
 }
 inOrder(root);
 return 0;
 }*/

/*int main(){
 //    int n;
 //   int count = 0;
 int n ;
 printf("建立二叉树，输入-1结束\n");
 trnode root;
 scanf("%d",&n);
 while(n != -1){
 //        printf("count = %d\n",count);
 insert(&root,n);
 scanf("%d",&n);
 //      printf("n = %d\n",n);
 //        count++;
 }
 inOrder(root);
 printf("\n");
 return 0;
 }*/

/*#include<stdio.h>
 #include<stdlib.h>
 typedef struct treeNode{
 int date;
 struct treeNode* lchild;
 struct treeNode* rchild;
 }*trnode,Tnode;
 
 trnode newNode(int v){
 
 trnode root = (trnode)malloc(sizeof(Tnode));
 root -> date = v;
 root -> lchild = NULL;
 root -> rchild = NULL;
 
 return root;
 }
 void insert (trnode *root,int x){
 trnode pre,s;
 if(*root == NULL){
 *root = newNode(x);
 }
 else{
 s = *root;
 pre = NULL;
 while(s){
 //printf("x = %d\n",x);
 if(x == s -> date) return;
 if(x > s -> date){
 pre = s;
 s = s -> rchild;
 }
 else{
 pre = s;
 s = s -> rchild;
 }
 }
 if( x > pre ->date){
 pre -> rchild = newNode(x);
 }
 else{
 pre ->lchild = newNode(x);
 }
 }
 }
 
 void inOrder(trnode root){
 if(root != NULL){
 inOrder(root -> lchild);
 printf("%d",root -> date);
 inOrder(root -> rchild);
 }
 }
 
 int main(){
 int n;
 printf("建立二叉树，输入-1结束\n");
 trnode root;
 scanf("%d",&n);
 while(n != -1){
 //printf("count = %d\n",count);
 insert(&root,n);
 scanf("%d",&n);
 }
 inOrder(root);
 printf("\n");
 return 0;
 }
 */

/*
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int date;
    struct node* next;
} *lnode,Node;


lnode insert(lnode* head,int n){
//    lnode pre,p;
//    pre = *head;
//    pre = pre ->next;
//    lnode current = (lnode)malloc(sizeof(Node));
//    current ->date = x;
//    if(pre == NULL){
//        pre -> next = current;
//        current->next = NULL;
//        printf("head:this is ok!\n");
//    }
//    else{
////        pre = *head;
////        lnode current = (lnode)malloc(sizeof(Node));
//        p = pre;
//        while( p -> date < x || p != NULL){
//            pre = p;
//            p = pre -> next;
//        }
//        current -> date = x;
//        current -> next = p;
//        pre -> next = current;
//        printf("insert the number %d!\n",x);
//
    lnode p,q;
    p = *head;
    p->next = NULL;
    printf("please input which number you want\n");
    for (int i = 0; i < n; i++) {
        lnode temp = (lnode)malloc(sizeof(Node));
        scanf("%d",&temp->date);
        temp -> next = p -> next;
        p -> next = temp;
    }
    q = *head;
    for (int i = 0; i < n; i++) {
         q = q->next;
        printf("%d ",q ->date);
    }
    return *head;
}

//你在难改的本性都会改的，是不是应该感谢我，那就。。。。。。请我吃饭
lnode Head = NULL;
//void Insert(int k){
//    lnode newNode, curent;
//    newNode = (lnode)malloc(sizeof(Node));
//    newNode->date = k;
//    if (Head == NULL || Head-> date > k) {
//        newNode->next = Head;
//        Head = newNode;
//    }else{
//        curent = Head;
//        while (1) {
//            if (curent->next == NULL || curent->next->date > k) {
//                newNode->next = curent->next;
//                curent->next = newNode;
//                break;
//            }else{
//                curent = curent->next;
//            }
//        }
//    }
//}
void Print(lnode list){
    lnode current = list->next;
    if (Head == NULL) {
        printf("The list is empty! \n");
    }else{
        current = Head;
        while (current != NULL) {
            printf("%d ",current->date);
            current = current->next;
        }
        printf("\n");
    }
}
void del(int x){
    lnode p,pre;
    pre = Head;
    if (pre->date == x) {
        Head = pre->next;
        free(pre);
    }
    printf("head %d\n",Head->date);
    p = pre->next;
    while(p != NULL){
        if(p -> date == x){
            pre -> next = p -> next;
            free(p);
            p = pre -> next;
            printf("delete: success!\n");
        }
        else{
            pre = p;
            p = p -> next;
        }
    }
}
int main(){
    lnode l;
    int n;
    l = (lnode)malloc(sizeof(Node));
    printf("n -> insert:\n");
    scanf("%d",&n);
    //printf("this is ok!");
//    while(n != -1){
//        insert(&l,n);
//        scanf("%d",&n);
//    }
    l = insert(&l, n);
    Print(l);
//    scanf("%d",&m);
//    del( m);
//    Print();
//    printf("m -> del:\n");
//    scanf("%d",&m);
//    del(&l,m);
    
    return 0;
}

*/

//#include <stdio.h>
//void swap(int *a,int *b){
//    int c;
//    c = *a;
//    *a = *b;
//    *b = c;
//    printf("%d\n",a);
//}
//int main(){
//    int a = 1;
//    int b = 2;
//    int *p;
//    printf("&a = %d\n",&a);
////    swap(&a, &b);
//    swap(&p, &b);
//    printf("a = %d, b = %d\n",a, b);
//}

//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Node{
//    int date;
//    struct Node* next;
//} *lnode,Node;
//
//lnode head = NULL;
//void insert(int x){
//    lnode p,pre;
//    p = head;
//    lnode current = (lnode)malloc(sizeof(Node));
//    current -> date = x;
//    if( head == NULL || p -> date > x){
//        current -> next = p;
//        head = current;
//        printf("insert head: %d\n",x);
//    }
//    else{
//        pre = p;
//        p = p -> next;
//
//        while(p != NULL  && p -> date < x){
//            pre = p;
//            p = p -> next;
//        }
//        current -> next = p;
//        pre -> next = current;
//        printf("insert: %d\n",x);
//    }
//}
//
///*void headInsert(int n){
// int i;
// lnode p,current,q;
// p = head;
// for(i = 0;i < n;i++){
// lnode current =(lnode)malloc(sizeof(Node));
// scanf("%d",& current -> date);
// current -> next = p -> next;
// p -> next = current;
// }
// q = head;
// for(i = 0; i < n;i++){
// q = q -> next;
// printf("%d ",p -> date);
// }
// } */
//
//void del(int x){
//    lnode p,pre;
//    pre = head;
//    p = pre -> next;
//    if(pre -> date == x){
//        free(pre);
//        pre = pre -> next;
//        printf("head: del %d",x);
//    }
//    else{
//        while(p != NULL){
//            if(p -> date == x){
//                pre -> next = p -> next;
//                free(p);
//                p = pre -> next;
//                printf("delete: success!\n");
//                break;
//            }
//            else{
//                pre = p;
//                p = p -> next;
//            }
//        }
//    }
//}
//int main(){
//    int n,m;
//    //lnode head = (lnode)malloc(sizeof(Node));
//
//    printf("n -> insert:\n");
//    scanf("%d",&n);
//    while( n != -1){
//        insert(n);
//        scanf("%d",&n);
//    }
//
//    printf("m -> del:\n");
//    scanf("%d",&m);
//    del(m);
//
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct node{
//    int date;
//    struct node *next;
//}List,*list;
////if the list have heard node,the other case the heard have the heard point.
//void CreatList(list *l,int x){
//    list p,pre;
//    p = *l;
//    list new = (list)malloc(sizeof(List));
//
//}
//
//#include <stdio.h>
//int main(){
//    int k[4];
//    int t = 0;
//    int n = 4;
//    int a,b,c,d;
//    while (n --) {
//        scanf("%d",&k[n]);
//    }
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4 - i - 1; j ++) {
//            if (k[j] < k[j + 1]) {
//                t = k[j + 1];
//                k[j + 1] = k[j];
//                k[j] = t;
//            }
//        }
//    }
//    a = k[0];
//    b = k[1];
//    c = k[2];
//    d = k[3];
//    n = -1;
//    while (n++ < 3) {
//        printf("%d ",k[n]);
//    }
//    return 0;
//}

#include <stdio.h>
int main(){
    int a[20];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i<20; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    for (int i = 0; i< 10; i++) {
        printf("%d ",a[i]);
    }
    printf("\n");
    for (int i =10; i< 20; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}
