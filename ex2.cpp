/*
 * Lab2 Ex2 VE280 20SU
 * Created by: Yiqing Fan
 * Last update: May 25, 2020
 */

#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct {
    // TODO: complete struct
    char name[16];
    int ChineseScore;
    int MathScore;
    int EnglishScore;
} Student;

int compare(const void* p1, const void* p2) {
    // TODO: complete compare function for qsort()
    Student *a = (Student *)p1;
    Student *b = (Student *)p2;
    int total1 = a->ChineseScore + a->MathScore + a->EnglishScore;
    int total2 = b->ChineseScore + b->MathScore + b->EnglishScore;
    
    return total2 - total1;
}

int main() {
    // TODO: read input
    int i, n;
    cin >> n;
    Student stu[10];
    for(i = 0; i < n; i++){
    	cin >> stu[i].name >> stu[i].ChineseScore >> stu[i].MathScore >> stu[i].EnglishScore;
    }

    // TODO: sort array with qsort()
    qsort(stu, n, sizeof(Student), compare);

    // TODO: print result
    for(i = 0; i < n; i++){
    	cout << stu[i].name << " " << stu[i].ChineseScore << " " << stu[i].MathScore << " " << 
    	stu[i].EnglishScore << endl;
    }

    return 0;
}
