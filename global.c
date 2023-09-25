typedef double real;
typedef real* field;
typedef Color color;

// int R = 100; //pix rows
// int C = 100; //pix cols
// int H = 10; //pix height
// int W = 10; //pix width

// int R = 200; //pix rows
// int C = 200; //pix cols
// int H = 5; //pix height
// int W = 5; //pix width
        int R = 10; //pix rows
        int C = 10; //pix cols
        int H = 100; //pix height
        int W = 100; //pix width
const int F = 10; //max num filters
const int L =100; //max weights in filter
typedef struct {
    int length;
    int r[L];
    int c[L];
    real a[L];
} filter;
int reading = 0;
real power = 2.0;
int r_span = 3;
int c_span = 3;
int num_filters = 3;
filter f[10];
real B[2][500][500];






