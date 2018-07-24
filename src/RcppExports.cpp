// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// jsdDistSafe
double jsdDistSafe(NumericVector p, NumericVector q, LogicalVector addPseudocount);
RcppExport SEXP _mirutil_jsdDistSafe(SEXP pSEXP, SEXP qSEXP, SEXP addPseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type addPseudocount(addPseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(jsdDistSafe(p, q, addPseudocount));
    return rcpp_result_gen;
END_RCPP
}
// getDiNtFreq
DataFrame getDiNtFreq(StringVector seqs, NumericVector wts, LogicalVector reverse);
RcppExport SEXP _mirutil_getDiNtFreq(SEXP seqsSEXP, SEXP wtsSEXP, SEXP reverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type wts(wtsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type reverse(reverseSEXP);
    rcpp_result_gen = Rcpp::wrap(getDiNtFreq(seqs, wts, reverse));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mirutil_jsdDistSafe", (DL_FUNC) &_mirutil_jsdDistSafe, 3},
    {"_mirutil_getDiNtFreq", (DL_FUNC) &_mirutil_getDiNtFreq, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_mirutil(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
