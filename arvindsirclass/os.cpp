#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int at[10], bt[10], ct[10], tat[10], wt[10];
    float totaltat = 0, totalwt = 0;

   
    for (int i = 0; i < n; i++) {
        cout << "Enter Arrival Time and Burst Time for P" << i + 1 << ": ";
        cin >> at[i] >> bt[i];
    }

    int current_time = 0;

  
    for (int i = 0; i < n; i++) {
      
        if (currenttime < at[i]) {
            currenttime = at[i];
        }

        ct[i] = currenttime + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        currenttime = ct[i];

        totaltat += tat[i];
        totalwt += wt[i];
    }


    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" << at[i] << "\t" << bt[i] << "\t" 
             << ct[i] << "\t" << tat[i] << "\t" << wt[i] << "\n";
    }

    cout << "Average Turnaround Time = " << total_tat / n;
    cout<<endl;
    cout << "\nAverage Waiting Time = " << total_wt / n << "\n";


}