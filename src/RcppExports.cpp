// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// max_calc
arma::vec max_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_max_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(max_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// min_calc
arma::vec min_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_min_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(min_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// mean_calc
arma::vec mean_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_mean_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(mean_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// median_calc
arma::vec median_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_median_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(median_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// sum_calc
arma::vec sum_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_sum_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(sum_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// std_calc
arma::vec std_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_std_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(std_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// skew_calc
arma::vec skew_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_skew_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(skew_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// kurt_calc
arma::vec kurt_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_kurt_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(kurt_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// amplitude_calc
arma::vec amplitude_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_amplitude_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(amplitude_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// fslope_calc
arma::vec fslope_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_fslope_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(fslope_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// abs_sum_calc
arma::vec abs_sum_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_abs_sum_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(abs_sum_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// amd_calc
arma::vec amd_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_amd_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(amd_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// mse_calc
arma::vec mse_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_mse_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(mse_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// fqr_calc
arma::vec fqr_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_fqr_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(fqr_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// sqr_calc
arma::vec sqr_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_sqr_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(sqr_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// tqr_calc
arma::vec tqr_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_tqr_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(tqr_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// iqr_calc
arma::vec iqr_calc(const arma::mat& mtx);
RcppExport SEXP _sitsfeats_iqr_calc(SEXP mtxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type mtx(mtxSEXP);
    rcpp_result_gen = Rcpp::wrap(iqr_calc(mtx));
    return rcpp_result_gen;
END_RCPP
}
// calc_bbox
arma::rowvec calc_bbox(const arma::mat& pts);
RcppExport SEXP _sitsfeats_calc_bbox(SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_bbox(pts));
    return rcpp_result_gen;
END_RCPP
}
// get_seasons_fast
arma::mat get_seasons_fast(const arma::mat& pts, const arma::uword colsize);
RcppExport SEXP _sitsfeats_get_seasons_fast(SEXP ptsSEXP, SEXP colsizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type pts(ptsSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type colsize(colsizeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_seasons_fast(pts, colsize));
    return rcpp_result_gen;
END_RCPP
}
// polytopleft
arma::mat polytopleft(const arma::mat bbox_pts);
RcppExport SEXP _sitsfeats_polytopleft(SEXP bbox_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type bbox_pts(bbox_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(polytopleft(bbox_pts));
    return rcpp_result_gen;
END_RCPP
}
// polytopright
arma::mat polytopright(const arma::mat bbox_pts);
RcppExport SEXP _sitsfeats_polytopright(SEXP bbox_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type bbox_pts(bbox_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(polytopright(bbox_pts));
    return rcpp_result_gen;
END_RCPP
}
// polybottomleft
arma::mat polybottomleft(const arma::mat bbox_pts);
RcppExport SEXP _sitsfeats_polybottomleft(SEXP bbox_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type bbox_pts(bbox_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(polybottomleft(bbox_pts));
    return rcpp_result_gen;
END_RCPP
}
// polybottomright
arma::mat polybottomright(const arma::mat bbox_pts);
RcppExport SEXP _sitsfeats_polybottomright(SEXP bbox_ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type bbox_pts(bbox_ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(polybottomright(bbox_pts));
    return rcpp_result_gen;
END_RCPP
}
// repvalues
arma::vec repvalues(arma::uword x, arma::uword time);
RcppExport SEXP _sitsfeats_repvalues(SEXP xSEXP, SEXP timeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type time(timeSEXP);
    rcpp_result_gen = Rcpp::wrap(repvalues(x, time));
    return rcpp_result_gen;
END_RCPP
}
// calculate_polar
Rcpp::List calculate_polar(arma::mat& timeseries);
RcppExport SEXP _sitsfeats_calculate_polar(SEXP timeseriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type timeseries(timeseriesSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_polar(timeseries));
    return rcpp_result_gen;
END_RCPP
}
// calc_distance
arma::vec calc_distance(const arma::mat& line, const arma::rowvec& pts_cent);
RcppExport SEXP _sitsfeats_calc_distance(SEXP lineSEXP, SEXP pts_centSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type line(lineSEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type pts_cent(pts_centSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_distance(line, pts_cent));
    return rcpp_result_gen;
END_RCPP
}
// gr_calc
arma::vec gr_calc(const arma::mat& pts_cent, const arma::mat& pts_line, const arma::uword size_col);
RcppExport SEXP _sitsfeats_gr_calc(SEXP pts_centSEXP, SEXP pts_lineSEXP, SEXP size_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type pts_cent(pts_centSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type pts_line(pts_lineSEXP);
    Rcpp::traits::input_parameter< const arma::uword >::type size_col(size_colSEXP);
    rcpp_result_gen = Rcpp::wrap(gr_calc(pts_cent, pts_line, size_col));
    return rcpp_result_gen;
END_RCPP
}
// std_np
arma::mat std_np(const arma::mat& timeseries);
RcppExport SEXP _sitsfeats_std_np(SEXP timeseriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type timeseries(timeseriesSEXP);
    rcpp_result_gen = Rcpp::wrap(std_np(timeseries));
    return rcpp_result_gen;
END_RCPP
}
// calc_ecc
arma::mat calc_ecc(const arma::mat& bboxmat);
RcppExport SEXP _sitsfeats_calc_ecc(SEXP bboxmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type bboxmat(bboxmatSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_ecc(bboxmat));
    return rcpp_result_gen;
END_RCPP
}
// linspace_vec
arma::vec linspace_vec(const arma::rowvec& timeseries);
RcppExport SEXP _sitsfeats_linspace_vec(SEXP timeseriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type timeseries(timeseriesSEXP);
    rcpp_result_gen = Rcpp::wrap(linspace_vec(timeseries));
    return rcpp_result_gen;
END_RCPP
}
// calc_angle
arma::vec calc_angle(const arma::mat& timeseries);
RcppExport SEXP _sitsfeats_calc_angle(SEXP timeseriesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type timeseries(timeseriesSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_angle(timeseries));
    return rcpp_result_gen;
END_RCPP
}
// calc_csi
arma::vec calc_csi(const arma::vec& line_length, const arma::vec& poly_area);
RcppExport SEXP _sitsfeats_calc_csi(SEXP line_lengthSEXP, SEXP poly_areaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type line_length(line_lengthSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type poly_area(poly_areaSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_csi(line_length, poly_area));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sitsfeats_max_calc", (DL_FUNC) &_sitsfeats_max_calc, 1},
    {"_sitsfeats_min_calc", (DL_FUNC) &_sitsfeats_min_calc, 1},
    {"_sitsfeats_mean_calc", (DL_FUNC) &_sitsfeats_mean_calc, 1},
    {"_sitsfeats_median_calc", (DL_FUNC) &_sitsfeats_median_calc, 1},
    {"_sitsfeats_sum_calc", (DL_FUNC) &_sitsfeats_sum_calc, 1},
    {"_sitsfeats_std_calc", (DL_FUNC) &_sitsfeats_std_calc, 1},
    {"_sitsfeats_skew_calc", (DL_FUNC) &_sitsfeats_skew_calc, 1},
    {"_sitsfeats_kurt_calc", (DL_FUNC) &_sitsfeats_kurt_calc, 1},
    {"_sitsfeats_amplitude_calc", (DL_FUNC) &_sitsfeats_amplitude_calc, 1},
    {"_sitsfeats_fslope_calc", (DL_FUNC) &_sitsfeats_fslope_calc, 1},
    {"_sitsfeats_abs_sum_calc", (DL_FUNC) &_sitsfeats_abs_sum_calc, 1},
    {"_sitsfeats_amd_calc", (DL_FUNC) &_sitsfeats_amd_calc, 1},
    {"_sitsfeats_mse_calc", (DL_FUNC) &_sitsfeats_mse_calc, 1},
    {"_sitsfeats_fqr_calc", (DL_FUNC) &_sitsfeats_fqr_calc, 1},
    {"_sitsfeats_sqr_calc", (DL_FUNC) &_sitsfeats_sqr_calc, 1},
    {"_sitsfeats_tqr_calc", (DL_FUNC) &_sitsfeats_tqr_calc, 1},
    {"_sitsfeats_iqr_calc", (DL_FUNC) &_sitsfeats_iqr_calc, 1},
    {"_sitsfeats_calc_bbox", (DL_FUNC) &_sitsfeats_calc_bbox, 1},
    {"_sitsfeats_get_seasons_fast", (DL_FUNC) &_sitsfeats_get_seasons_fast, 2},
    {"_sitsfeats_polytopleft", (DL_FUNC) &_sitsfeats_polytopleft, 1},
    {"_sitsfeats_polytopright", (DL_FUNC) &_sitsfeats_polytopright, 1},
    {"_sitsfeats_polybottomleft", (DL_FUNC) &_sitsfeats_polybottomleft, 1},
    {"_sitsfeats_polybottomright", (DL_FUNC) &_sitsfeats_polybottomright, 1},
    {"_sitsfeats_repvalues", (DL_FUNC) &_sitsfeats_repvalues, 2},
    {"_sitsfeats_calculate_polar", (DL_FUNC) &_sitsfeats_calculate_polar, 1},
    {"_sitsfeats_calc_distance", (DL_FUNC) &_sitsfeats_calc_distance, 2},
    {"_sitsfeats_gr_calc", (DL_FUNC) &_sitsfeats_gr_calc, 3},
    {"_sitsfeats_std_np", (DL_FUNC) &_sitsfeats_std_np, 1},
    {"_sitsfeats_calc_ecc", (DL_FUNC) &_sitsfeats_calc_ecc, 1},
    {"_sitsfeats_linspace_vec", (DL_FUNC) &_sitsfeats_linspace_vec, 1},
    {"_sitsfeats_calc_angle", (DL_FUNC) &_sitsfeats_calc_angle, 1},
    {"_sitsfeats_calc_csi", (DL_FUNC) &_sitsfeats_calc_csi, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_sitsfeats(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
