#ifndef UTILS_EVALUATORUTILS_H_
#define UTILS_EVALUATORUTILS_H_

#include <NTL/ZZ.h>
#include <vector>

#include "../czz/CZZ.h"

using namespace NTL;

class EvaluatorUtils {
public:


	static CZZ evaluateVal(const double& xr, const double& xi, const long& logp);
	static CZZ evaluateRandomVal(const long& logp);

	//-----------------------------------------

	static CZZ evaluatePow(const double& xr, const double& xi, const long& degree, const long& logp);
	static CZZ evaluatePow2(const double& xr, const double& xi, const long& logDegree, const long& logp);

	//-----------------------------------------

	static vector<CZZ> evaluatePowvec(const double& xr, const double& xi, const long& degree, const long& logp);
	static vector<CZZ> evaluatePow2vec(const double& xr, const double& xi, const long& logDegree, const long& logp);

	//-----------------------------------------

	static CZZ evaluateInverse(const double& xr, const double& xi, const long& logp);
	static CZZ evaluateExponent(const double& xr, const double& xi, const long& logp);
	static CZZ evaluateSigmoid(const double& xr, const double& xi, const long& logp);

	//-----------------------------------------

	static void evaluateRandomVals(vector<CZZ>& res, const long& size, const long& logp);
	static void evaluateRandomValsAndProduct(vector<CZZ>& vals, CZZ& prod, const long& slots, const long& logp);
	static void evaluateRandomValsAndExponents(vector<CZZ>& vals, vector<CZZ>& fvals, const long& slots, const long& logp);
	static void evaluateRandomValsAndSigmoids(vector<CZZ>& vals, vector<CZZ>& fvals, const long& slots, const long& logp);

	static void leftShift(vector<CZZ>& vals, const long& logp);
};

#endif /* UTILS_EVALUATORUTILS_H_ */