#include	<iostream>
#include	<cmath>
using	namespace	std;
int	main(void){
	const	long double	alpha=1/137.03599920611L;
	long double	r=(1-alpha)/alpha,	s=0;
	for(size_t	i=1;	i<=136;	i++)	s+=1.0L/i/i;
	long double	pi0=sqrtl(6*s);
	long double	pi1=sqrtl(logl(r)*2);
	long double	pi2=sqrtl(6*(s + powl(r-136,1.0L/2/pi0)/r/r) );	//	define the intraploration of the last fractional term
	cerr.precision(15);	
	cerr<<"pi1\t"<<pi1<<'\n';
	cerr<<"pi2\t"<<pi2<<'\n';
	cerr<<"ln(pi1/pi2)\t"<<logl(pi1/pi2)<<'\n';
	return	0;
}