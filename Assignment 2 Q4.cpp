#include<iostream>
using namespace std;


class time
{
private:
int hours,miuntes,seconds;
public:	
time()
{
	hours=0;
	miuntes=0;
	seconds=0;
}
void setData(int h, int m, int s) 
{
    if (h >= 0 && h <= 23) { hours = h; } else { hours = 0; }
    if (m >= 0 && m <= 59) { minutes = m; } else { minutes = 0; }
    if (s >= 0 && s <= 59) { seconds = s; } else { seconds = 0; }
}
};
class TimeDiff : public time {
	public:
    TimeDiff(int h, int m, int s) {
        setData(h, m, s); 
    }

    void display() {
        cout << "Duration: " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

class ScheduleTime : public time {
	private:
    	string event;

	public:
    ScheduleTime(int h, int m, int s, string ev) {
        setData(h, m, s);
        event = ev;
    }

    void display() {
        cout << "Event: " << event << " at " << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int h, m, s;
    cout << "Enter hours: "; 
	cin >> h;
    cout << "Enter minutes: "; 
	cin >> m;
    cout << "Enter seconds: "; 
	cin >> s;
	
	
	
    TimeDiff td(h, m, s);
    td.display();

    ScheduleTime st(h, m, s, "Something");
    st.display();

    return 0;
}
