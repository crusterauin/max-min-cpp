#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> array;
    cout << "Masukkan beberapa nilai dan pisahkan dengan spasi. \nJika sudah selesai, masukkan tanda titik (.) dan tekan enter.\n";
    
    int input;
    while (cin >> input) {
        array.push_back(input);
    }

    int max = array[0];
    int min = array[0];
    for (int i = 1; i < array.size(); i++) {
        if (max < array[i]) {
            max = array[i];            
        } else if (min > array[i]) {
            min = array[i];
        }
    }
    
    cout << "Nilai terkecil adalah : " << min << "\n";
    cout << "Nilai terbesar adalah : " << max << endl;
}
