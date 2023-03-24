#include<iostream>
using namespace std;

bool isEven(int x){
    if(x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if(x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x,int f){
    return x % f == 0;
}

int maxArray(int arr[],int n){
    int result;
    for(int i = 0; i < n; i++) {
        if(result < arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[],int n){
    int result = arr[0];
    for(int i = 1; i < n; i++) {
        if(result > arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int MAX(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}

int MIN(int a,int b){
    if (a<b)
        return a;
    else
        return b;
}

int sumEven(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

void SWAP(int a,int b){
    int temp;
    temp = b;
    b = a;
    a = temp;
    cout << "Nilai A: " << a << endl << "Nilai B: " << b;
}

bool isFound(int a[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    //isEven
    cout << "------------------------------------------"<<endl;
    cout << "IsEven :" << endl;
    cout << "Input Angka Genap: ";
    cin >> n;
    string even = (isEven(n)==1) ? " adalah angka Genap" : " bukan angka Genap";
    cout << n << even << endl;
    cout << "------------------------------------------"<<endl;

    //isOdd
    cout << "IsOdd" << endl;
    cout << "Input Angka Ganjil: ";
    cin >> n;
    string odd = (isOdd(n)==1) ? " adalah angka Ganjil" : " bukan angka Ganjil";
    cout << n << odd << endl;
    cout << "------------------------------------------"<<endl;

    int x,f;
    //isFactor
    cout << "IsFactor" << endl;
    cout << "Input Nilai x: ";
    cin >> x;
    cout << "Input Nilai f: ";
    cin >> f;
    string faktor = (isFactor(x,f)==1) ? "Faktor" : "Tidak termasuk Faktor";
    cout << x << " dan " << f << " Adalah :" << faktor << endl;
    cout << "------------------------------------------"<<endl;

    int a,b;
    //max min
    cout << "Max Min" << endl;
    cout << "Input Nilai A: ";
    cin >> a;
    cout << "Input Nilai B: ";
    cin >> b;
    cout << "Nilai terbesarnya adalah : " << MAX(a,b) << endl;
    cout << "Nilai terkecilnya adalah : " << MIN(a,b) << endl;
    cout << "------------------------------------------"<<endl;


    //isFound
    cout << "IsFound" << endl;
    cout << "Input jumlah elemen array: ";
    cin >> n;
    cout << endl;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cout << "Input angkanya: ";
        cin >> ar[i];
    }
    cout << "Cari angka yang anda inginkan : ";
    cin >> x;
    string cari = (isFound(ar,x,n)==1) ? "Angka ditemukan / True" : "Angka tidak ditemukan / False";
    cout << cari << endl;
    cout << "------------------------------------------"<<endl;


    //sumEven Odd
    cout << "Sum Even Odd" << endl;
    cout << "Input jumlah elemen array: ";
    cin >> n;
    cout << endl;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Input elemen array: ";
        cin >> arr[i];
    }
    int maxArr = maxArray(arr,n);
    int minArr = minArray(arr,n);
    int sumGenap = sumEven(arr,n);
    int sumGanjil = sumOdd(arr,n);
    cout << "Nilai Terbesar dari array: " << maxArr << endl;
    cout << "Nilai Terkecil dari array: " << minArr << endl;
    cout << "Jumlah Nilai Genap-nya adalah : " << sumGenap << endl;
    cout << "Jumlah Nilai Ganjil-nya adalah : " << sumGanjil << endl;
    cout << "------------------------------------------"<<endl;

    //swap
    cout << "Swap" << endl;
    cout << "Input Nilai A: ";
    cin >> a;
    cout << "Input Nilai B: ";
    cin >> b;
    SWAP(a,b);
return 0;
}
