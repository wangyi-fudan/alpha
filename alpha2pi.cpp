#include	<iostream>
#include	<cmath>
using	namespace	std;
int	main(void){
	const	long double	alpha=1/137.03599920611L;	//	Leo et al. 2020
	long double	r=(1-alpha)/alpha,	s=0;	//	r is oddz by treat alpha as a probability
	for(size_t	i=1;	i<=136;	i++)	s+=1.0L/i/i;	//	sum the integer terms of Basel sum
	long double	pi0=sqrtl(6*s);	//	"Pi" estimated by integer terms of Basel sum
	long double	pi1=sqrtl(logl(r)*2);	//	"Pi" estimated by log(r);
	long double	pi2=sqrtl(6*(s + powl(r-136,1.0L/2/pi0)/r/r) );	//	intraploration of the last fractional term in Basel sum with pi0
	cerr.precision(15);	
	cerr<<"pi1\t"<<pi1<<'\n';	//	the "Pi" estimated by log(r)
	cerr<<"pi2\t"<<pi2<<'\n';	//	the "Pi" estimated by Basel sum
	cerr<<"ln(pi1/pi2)\t"<<logl(pi1/pi2)<<'\n';	//	the two "Pi"s are almost equal
	return	0;	//	Do we live in a world that Pi=3.1346195	?
}