A.
int id_num
int redits
float gpa
B.
char name[40]
int month:
int day
int year
int credits
float avg
C.
char name[40]
float price;
char date[9]
D.
int part_no
char desc[100]
int quant;
int reorder;

/* 2.
A.    struct s_temp student_rec = {4672, 68, 3.01}
B.    struct s_temp student_rec = {"Soemones name", 8, 4, 60, 96, 3.69}
C.    struct s_temp stock = {"Ibm", 134.5, "10/2/90"}
D.    struct s_temp inven = {16879, "Battery", 10, 3}
*/
3. 
int main(){
    struct stock_temp{
        char name[10];
        float earn;
        float ratio;
    };
    struct stock_template stock;
    int count;
    for (count = 1; count <= 5; ++count){
        printf("\n Enter Stock name: ");
        scanf("%s, stock.name")

    }
}
4.
struct s_temp student_rec[100];
struct s_temp student[100];
struct s_temp stock[100];
struct s_temp temp_inven[100];

5. structure for employee record.

struct emp_rec{
    int num;
    char name[20];
    float rate;
    float ratio;
    float hours
    float gross_pay
};
main(){
    struct emp_rec payroll(6); // builds array of 6
    int i;
    float total_gross = 0.0
    for (i = 0; i<=5; ++i){
        printf("\n Enter ID: ");
        scanf("%i", &payroll[i].num);
        printf("\n Enter Name: ");
        scanf("%s", &payroll[i].name);
        printf("\n Enter Pay: ");
        scanf("%s", &payroll[i].rate);
    }

    print ("stuff")
    for (i = 0; i <=5; ++I){
        printf ("%-20s %6i", payroll[i].num, payroll[i].name)
    }
    printf ("total gross payout.")
}



struct emp_rec compute_gross(struct emp_rec name_copy){
    copy.gross_pay = copy.rate* copy.hours;
    return copy;
}

