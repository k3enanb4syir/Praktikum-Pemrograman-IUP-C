#include <iostream>
#include <string>
using namespace std;

struct Student {
    string NISN;
    string name;
    int value;
};


void displayArray(Student data[], int dataSize) {
    for (int i = 0; i < dataSize; i++) {
        cout << "NISN: " << data[i].NISN << ", Name: " << data[i].name << ", Value: " << data[i].value << endl;
    }
    cout << endl;
}


void insertionSortNISN(Student data[], int dataSize) {
    for (int j = 1; j < dataSize; j++) {
        Student temp = data[j];
        int i = j - 1;
        while (i >= 0 && data[i].NISN < temp.NISN) {
            data[i + 1] = data[i];
            i--;
        }
        data[i + 1] = temp;
    }
}


void insertionSortValue(Student data[], int dataSize) {
    for (int j = 1; j < dataSize; j++) {
        Student temp = data[j];
        int i = j - 1;
        while (i >= 0 && data[i].value < temp.value) {
            data[i + 1] = data[i];
            i--;
        }
        data[i + 1] = temp;
    }
}


void selectionSortNISN(Student data[], int dataSize) {
    for (int i = 0; i < dataSize - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < dataSize; j++) {
            if (data[j].NISN > data[maxIdx].NISN) {
                maxIdx = j;
            }
        }
        swap(data[i], data[maxIdx]);
    }
}


void selectionSortValue(Student data[], int dataSize) {
    for (int i = 0; i < dataSize - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < dataSize; j++) {
            if (data[j].value > data[maxIdx].value) {
                maxIdx = j;
            }
        }
        swap(data[i], data[maxIdx]);
    }
}


void bubbleSortNISN(Student data[], int dataSize) {
    for (int i = 0; i < dataSize - 1; i++) {
        for (int j = 0; j < dataSize - i - 1; j++) {
            if (data[j].NISN < data[j + 1].NISN) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}


void bubbleSortValue(Student data[], int dataSize) {
    for (int i = 0; i < dataSize - 1; i++) {
        for (int j = 0; j < dataSize - i - 1; j++) {
            if (data[j].value < data[j + 1].value) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}


int binarySearchNISN(Student data[], int dataSize, string targetNISN) {
    int left = 0, right = dataSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid].NISN == targetNISN) {
            return mid;
        }
        if (data[mid].NISN < targetNISN) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1; 
}


void updateNameByValue(Student data[], int dataSize, int targetValue, string newName) {
    for (int i = 0; i < dataSize; i++) {
        if (data[i].value == targetValue) {
            data[i].name = newName;
        }
    }
}

int main() {
    
    cout << "The student data:" << endl;
    cout << "" << endl;
      cout << "|NISN                  |" << "Name                      |" << "Value                  |"<< endl;
    cout << "|----------------------|" << "--------------------------|" << "-----------------------|"<< endl;
    cout << "|9960312699            |" << "Handi Ramadhan            |" << "90                     |"<< endl;
    cout << "|9963959682            |" << "Rio Alfandra              |" << "55                     |"<< endl;
    cout << "|9950310962            |" << "Ronaldo Valentino Uneputty|" << "80                     |"<< endl;
    cout << "|9970272750            |" << "Achmad Yaumil Fadjri R.   |" << "60                     |"<< endl;
    cout << "|9970293945            |" << "Alivia Rahma Pramesti     |" << "70                     |"<< endl;
    cout << "|9952382180            |" << "Ari Lutfianto             |" << "65                     |"<< endl;
    cout << "|9965653989            |" << "Arief Budiman             |" << "60                     |"<< endl;
    cout << "" << endl;
    
    
    Student data[] = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };
    int dataSize = sizeof(data) / sizeof(data[0]);

  cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Sorting by NISN (Insertion Sort):" << endl;
    cout << "" << endl;
    insertionSortNISN(data, dataSize);
    displayArray(data, dataSize);
cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Sorting by NISN (Selection Sort):" << endl;
    cout << "" << endl;
    selectionSortNISN(data, dataSize);
    displayArray(data, dataSize);
cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Sorting by NISN (Bubble Sort):" << endl;
    cout << "" << endl;
    bubbleSortNISN(data, dataSize);
    displayArray(data, dataSize);

    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Insertion sort by Value:" << endl;
    cout << "" << endl;
    insertionSortValue(data, dataSize);
    displayArray(data, dataSize);
cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Selection sort by Value:" << endl;
    cout << "" << endl;
    selectionSortValue(data, dataSize);
    displayArray(data, dataSize);
cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Bubble sort by Value:" << endl;
    cout << "" << endl;
    bubbleSortValue(data, dataSize);
    displayArray(data, dataSize);

    cout << "-------------------------------------------------------------------------------" << endl;
    string targetNISN = "9950310962";
    int index = binarySearchNISN(data, dataSize, targetNISN);
    if (index != -1) {
        cout << "Found the NISN " << targetNISN << " with the value: " << data[index].value << endl;
    } else {
        cout << "NISN " << targetNISN << " not found" << endl;
    }

    
    int targetValue = 60;
    string newName = "Joko";
    updateNameByValue(data, dataSize, targetValue, newName);
    cout << "New data updated wth name changed to 'Joko' when value is 60 '" << newName << "':" << endl;
    cout << "" << endl;
    displayArray(data, dataSize);
    
    cout << "-------------------------------------------------------------------------------" << endl;

    cout << "TEST IS SUCCESSFUL" << endl;

    return 0;
    
    
}