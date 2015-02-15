#include "mex.h"
#include "Test.h"
double addcpp(double a,double b)
{
	return a+b;
}
void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])  
{  
	double *a;  
	double b, c;  
	plhs[0] = mxCreateDoubleMatrix(1, 1, mxREAL);  
	a = mxGetPr(plhs[0]);  
	b = *(mxGetPr(prhs[0]));  
	c = *(mxGetPr(prhs[1]));  
	*a = addcpp(b, c);  
}  
