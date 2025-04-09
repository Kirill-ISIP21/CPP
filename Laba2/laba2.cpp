#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <ctime>
#include <cmath>
#define N 5

using namespace std;
int i, j;
void maximum(float m[N][N]);
void minimum(float m[N][N]);
void UpMaximum(float m[N][N]);
void UpMinimum(float m[N][N]);
void DownMaximum(float m[N][N]);
void DownMinimum(float m[N][N]);
void DiagMainMaximum(float m[N][N]);
void DiagMainMinimum(float m[N][N]);
void DiagSecondMaximum(float m[N][N]);
void DiagSecondMinimum(float m[N][N]);
void MedAverage(float m[N][N]);
void DownMedAverage(float m[N][N]);
void UpMedAverage(float m[N][N]);
void SumLine(float m[N][N]);
void SumColumn(float m[N][N]);
void MinLine(float m[N][N]);
void MaxLine(float m[N][N]);
void MinColumn(float m[N][N]);
void MaxColumn(float m[N][N]);
void MedAvgLine(float m[N][N]);
void MedAvgColumn(float m[N][N]);
void UpSum(float m[N][N]);
void DownSum(float m[N][N]);
void PribMedAvg(float m[N][N]);

int main()
{
    float m[N][N];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++) m[i][j] = rand() / 10.;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            cout << setw(4) << setprecision(7) << m[i][j] << "\t";
        cout << endl;
    }
    maximum(m);
    minimum(m);
    UpMaximum(m);
    UpMinimum(m);
    DownMaximum(m);
    DownMinimum(m);
    DiagMainMaximum(m);
    DiagMainMinimum(m);
    DiagSecondMaximum(m);
    DiagSecondMinimum(m);
    MedAverage(m);
    DownMedAverage(m);
    UpMedAverage(m);
    SumLine(m);
    SumColumn(m);
    MinLine(m);
    MaxLine(m);
    MinColumn(m);
    MaxColumn(m);
    MedAvgLine(m);
    MedAvgColumn(m);
    UpSum(m);
    DownSum(m);
    PribMedAvg(m);
   // getch();
}

void maximum(float m[N][N]) {
    float Mmax = m[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (m[i][j] > Mmax) Mmax = m[i][j];
        }
    }
    cout << "Matrix max - " << Mmax << endl;
}

void minimum(float m[N][N]) {
    float Mmin = m[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (m[i][j] < Mmin) Mmin = m[i][j];
        }
    }
    cout << "Matrix min - " << Mmin << endl;
}

void UpMaximum(float m[N][N]) {
    float Umax = m[0][1];
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (m[i][j] > Umax) Umax = m[i][j];
        }
    }
    cout << "Matrix upper triangle max - " << Umax << endl;
}

void UpMinimum(float m[N][N]) {
    float Umin = m[0][1];
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (m[i][j] < Umin) Umin = m[i][j];
        }
    }
    cout << "Matrix upper triangle min - " << Umin << endl;
}

void DownMaximum(float m[N][N]) {
    float Dmax = m[1][0];
    for (i = N - 1; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            if (m[i][j] > Dmax) Dmax = m[i][j];
        }
    }
    cout << "Matrix down triangle max - " << Dmax << endl;
}

void DownMinimum(float m[N][N]) {
    float Dmin = m[1][0];
    for (i = N - 1; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            if (m[i][j] < Dmin) Dmin = m[i][j];
        }
    }
    cout << "Matrix down triangle min - " << Dmin << endl;
}

void DiagMainMaximum(float m[N][N]) {
    float Dmax = m[0][0];
    for (i = 0; i < N; i++) {
        if (m[i][i] > Dmax) Dmax = m[i][i];
    }
    cout << "Matrix diag main max - " << Dmax << endl;
}

void DiagMainMinimum(float m[N][N]) {
    float Dmin = m[0][0];
    for (i = 0; i < N; i++) {
            if (m[i][i] < Dmin) Dmin = m[i][i];
        }
    cout << "Matrix diag main min - " << Dmin << endl;
}

void DiagSecondMaximum(float m[N][N]) {
    float Dmax = m[0][N-1];
    for (i = 0; i < N; i++) {
        if (m[i][N-1-i] > Dmax) Dmax = m[i][N - 1 - i];
    }
    cout << "Matrix diag second max - " << Dmax << endl;
}

void DiagSecondMinimum(float m[N][N]) {
    float Dmin = m[0][N - 1];
    for (i = 0; i < N; i++) {
        if (m[i][N - 1 - i] < Dmin) Dmin = m[i][N - 1 - i];
    }
    cout << "Matrix diag second min - " << Dmin << endl;
}

void MedAverage (float m[N][N]) {
float Sum=0;
for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
        Sum += m[i][j];
    }
}
cout << "Matrix medium average mean - " << Sum/(N*N) << endl;
}

void DownMedAverage(float m[N][N]) {
    float Sum = 0;
    int count = 0;
    for (i = N - 1; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            Sum += m[i][j];
            count++;
        }
    }
    cout << "Matrix down triangle medium average- " << Sum / count << endl;
}
void UpMedAverage(float m[N][N]) {
    float Sum = 0;
    int count = 0;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            Sum += m[i][j];
            count++;
        }
    }
    cout << "Matrix upper triangle medium average - " << Sum / count << endl;
}

void SumLine(float m[N][N]) {
    float Sum = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            Sum += m[i][j];
        }
        cout << "Sum of line ¹ "<< (i+1) <<" - " << Sum << endl;
        Sum = 0;
    }
    
}

void SumColumn(float m[N][N]) {
    float Sum = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            Sum += m[j][i];
        }
        cout << "Sum of column ¹ " << (i + 1) << " - " << Sum << endl;
        Sum = 0;
    }

}

void MinLine(float m[N][N]) {
    float Min = 0;
    for (i = 0; i < N; i++) {
        Min = m[i][0];
        for (j = 0; j < N; j++) {
            if (m[i][j] < Min) Min = m[i][j];
        }
        cout << "Min of line ¹ " << (i + 1) << " - " << Min << endl;
    }

}

void MinColumn(float m[N][N]) {
    float Min = 0;
    for (i = 0; i < N; i++) {
        Min = m[0][i];
        for (j = 0; j < N; j++) {
            if (m[j][i] < Min) Min = m[j][i];
        }
        cout << "Min of column ¹ " << (i + 1) << " - " << Min << endl;
    }

}
void MaxLine(float m[N][N]) {
    float Max = 0;
    for (i = 0; i < N; i++) {
        Max = m[i][0];
        for (j = 0; j < N; j++) {
            if (m[i][j] > Max) Max = m[i][j];
        }
        cout << "Max of line ¹ " << (i + 1) << " - " << Max << endl;
    }
}

void MaxColumn(float m[N][N]) {
    float Max = 0;
    for (i = 0; i < N; i++) {
        Max = m[0][i];
        for (j = 0; j < N; j++) {
            if (m[j][i] > Max) Max = m[j][i];
        }
        cout << "Max of column ¹ " << (i + 1) << " - " << Max << endl;
    }
}

void MedAvgLine(float m[N][N]) {
    float Sum = 0;
    int count = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            Sum += m[i][j];
            count++;
        }
        cout << "Medium average of line ¹ " << (i + 1) << " - " << Sum/count << endl;
        Sum = 0;
        count = 0;
    }
}

void MedAvgColumn(float m[N][N]) {
    float Sum = 0;
    int count = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            Sum += m[j][i];
            count++;
        }
        cout << "Medium average of column ¹ " << (i + 1) << " - " << Sum / count << endl;
        Sum = 0;
        count = 0;
    }
}

void DownSum(float m[N][N]) {
    float Sum = 0;
    for (i = N - 1; i >= 0; i--) {
        for (j = i - 1; j >= 0; j--) {
            Sum += m[i][j];
        }
    }
    cout << "Matrix down triangle sum - " << Sum << endl;
}
void UpSum(float m[N][N]) {
    float Sum = 0;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            Sum += m[i][j];
        }
    }
    cout << "Matrix upper triangle sum - " << Sum << endl;
}

void PribMedAvg(float m[N][N]) {

    float med = 0, num = m[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            med += m[i][j];
        }
    }
    med /= (N * N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (abs(med - m[i][j]) < abs(med - num)) {
                num = m[i][j];
            }

        }
    }

    cout << "Matrix number closest to medium average mean - " << num << endl;

}