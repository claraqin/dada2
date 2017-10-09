// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dada2.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// dada_uniques
Rcpp::List dada_uniques(std::vector< std::string > seqs, std::vector<int> abundances, Rcpp::NumericMatrix err, Rcpp::NumericMatrix quals, Rcpp::NumericMatrix score, int gap, bool use_kmers, double kdist_cutoff, int band_size, double omegaA, int max_clust, double min_fold, int min_hamming, int min_abund, bool use_quals, bool final_consensus, bool vectorized_alignment, int homo_gap, bool multithread, bool verbose, int SSE);
RcppExport SEXP _dada2_dada_uniques(SEXP seqsSEXP, SEXP abundancesSEXP, SEXP errSEXP, SEXP qualsSEXP, SEXP scoreSEXP, SEXP gapSEXP, SEXP use_kmersSEXP, SEXP kdist_cutoffSEXP, SEXP band_sizeSEXP, SEXP omegaASEXP, SEXP max_clustSEXP, SEXP min_foldSEXP, SEXP min_hammingSEXP, SEXP min_abundSEXP, SEXP use_qualsSEXP, SEXP final_consensusSEXP, SEXP vectorized_alignmentSEXP, SEXP homo_gapSEXP, SEXP multithreadSEXP, SEXP verboseSEXP, SEXP SSESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type abundances(abundancesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type err(errSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type quals(qualsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< int >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< bool >::type use_kmers(use_kmersSEXP);
    Rcpp::traits::input_parameter< double >::type kdist_cutoff(kdist_cutoffSEXP);
    Rcpp::traits::input_parameter< int >::type band_size(band_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type omegaA(omegaASEXP);
    Rcpp::traits::input_parameter< int >::type max_clust(max_clustSEXP);
    Rcpp::traits::input_parameter< double >::type min_fold(min_foldSEXP);
    Rcpp::traits::input_parameter< int >::type min_hamming(min_hammingSEXP);
    Rcpp::traits::input_parameter< int >::type min_abund(min_abundSEXP);
    Rcpp::traits::input_parameter< bool >::type use_quals(use_qualsSEXP);
    Rcpp::traits::input_parameter< bool >::type final_consensus(final_consensusSEXP);
    Rcpp::traits::input_parameter< bool >::type vectorized_alignment(vectorized_alignmentSEXP);
    Rcpp::traits::input_parameter< int >::type homo_gap(homo_gapSEXP);
    Rcpp::traits::input_parameter< bool >::type multithread(multithreadSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< int >::type SSE(SSESEXP);
    rcpp_result_gen = Rcpp::wrap(dada_uniques(seqs, abundances, err, quals, score, gap, use_kmers, kdist_cutoff, band_size, omegaA, max_clust, min_fold, min_hamming, min_abund, use_quals, final_consensus, vectorized_alignment, homo_gap, multithread, verbose, SSE));
    return rcpp_result_gen;
END_RCPP
}
// C_is_bimera
bool C_is_bimera(std::string sq, std::vector<std::string> pars, bool allow_one_off, int min_one_off_par_dist, int match, int mismatch, int gap_p, int max_shift);
RcppExport SEXP _dada2_C_is_bimera(SEXP sqSEXP, SEXP parsSEXP, SEXP allow_one_offSEXP, SEXP min_one_off_par_distSEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP gap_pSEXP, SEXP max_shiftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type sq(sqSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type pars(parsSEXP);
    Rcpp::traits::input_parameter< bool >::type allow_one_off(allow_one_offSEXP);
    Rcpp::traits::input_parameter< int >::type min_one_off_par_dist(min_one_off_par_distSEXP);
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int >::type gap_p(gap_pSEXP);
    Rcpp::traits::input_parameter< int >::type max_shift(max_shiftSEXP);
    rcpp_result_gen = Rcpp::wrap(C_is_bimera(sq, pars, allow_one_off, min_one_off_par_dist, match, mismatch, gap_p, max_shift));
    return rcpp_result_gen;
END_RCPP
}
// C_table_bimera2
Rcpp::DataFrame C_table_bimera2(Rcpp::IntegerMatrix mat, std::vector<std::string> seqs, double min_fold, int min_abund, bool allow_one_off, int min_one_off_par_dist, int match, int mismatch, int gap_p, int max_shift);
RcppExport SEXP _dada2_C_table_bimera2(SEXP matSEXP, SEXP seqsSEXP, SEXP min_foldSEXP, SEXP min_abundSEXP, SEXP allow_one_offSEXP, SEXP min_one_off_par_distSEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP gap_pSEXP, SEXP max_shiftSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< double >::type min_fold(min_foldSEXP);
    Rcpp::traits::input_parameter< int >::type min_abund(min_abundSEXP);
    Rcpp::traits::input_parameter< bool >::type allow_one_off(allow_one_offSEXP);
    Rcpp::traits::input_parameter< int >::type min_one_off_par_dist(min_one_off_par_distSEXP);
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int >::type gap_p(gap_pSEXP);
    Rcpp::traits::input_parameter< int >::type max_shift(max_shiftSEXP);
    rcpp_result_gen = Rcpp::wrap(C_table_bimera2(mat, seqs, min_fold, min_abund, allow_one_off, min_one_off_par_dist, match, mismatch, gap_p, max_shift));
    return rcpp_result_gen;
END_RCPP
}
// C_nwalign
Rcpp::CharacterVector C_nwalign(std::string s1, std::string s2, int match, int mismatch, int gap_p, int homo_gap_p, int band, bool endsfree);
RcppExport SEXP _dada2_C_nwalign(SEXP s1SEXP, SEXP s2SEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP gap_pSEXP, SEXP homo_gap_pSEXP, SEXP bandSEXP, SEXP endsfreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int >::type gap_p(gap_pSEXP);
    Rcpp::traits::input_parameter< int >::type homo_gap_p(homo_gap_pSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type endsfree(endsfreeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_nwalign(s1, s2, match, mismatch, gap_p, homo_gap_p, band, endsfree));
    return rcpp_result_gen;
END_RCPP
}
// C_eval_pair
Rcpp::IntegerVector C_eval_pair(std::string s1, std::string s2);
RcppExport SEXP _dada2_C_eval_pair(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(C_eval_pair(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// C_pair_consensus
Rcpp::CharacterVector C_pair_consensus(std::string s1, std::string s2, int prefer, bool trim_overhang);
RcppExport SEXP _dada2_C_pair_consensus(SEXP s1SEXP, SEXP s2SEXP, SEXP preferSEXP, SEXP trim_overhangSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type prefer(preferSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_overhang(trim_overhangSEXP);
    rcpp_result_gen = Rcpp::wrap(C_pair_consensus(s1, s2, prefer, trim_overhang));
    return rcpp_result_gen;
END_RCPP
}
// C_isACGT
Rcpp::LogicalVector C_isACGT(std::vector<std::string> seqs);
RcppExport SEXP _dada2_C_isACGT(SEXP seqsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type seqs(seqsSEXP);
    rcpp_result_gen = Rcpp::wrap(C_isACGT(seqs));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_kmers
Rcpp::DataFrame evaluate_kmers(std::vector< std::string > seqs, int kmer_size, Rcpp::NumericMatrix score, int gap, int band, unsigned int max_aligns);
RcppExport SEXP _dada2_evaluate_kmers(SEXP seqsSEXP, SEXP kmer_sizeSEXP, SEXP scoreSEXP, SEXP gapSEXP, SEXP bandSEXP, SEXP max_alignsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< int >::type kmer_size(kmer_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP);
    Rcpp::traits::input_parameter< int >::type gap(gapSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type max_aligns(max_alignsSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_kmers(seqs, kmer_size, score, gap, band, max_aligns));
    return rcpp_result_gen;
END_RCPP
}
// kmer_dist
Rcpp::NumericVector kmer_dist(std::vector< std::string > s1, std::vector< std::string > s2, int kmer_size);
RcppExport SEXP _dada2_kmer_dist(SEXP s1SEXP, SEXP s2SEXP, SEXP kmer_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type kmer_size(kmer_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(kmer_dist(s1, s2, kmer_size));
    return rcpp_result_gen;
END_RCPP
}
// kord_dist
Rcpp::NumericVector kord_dist(std::vector< std::string > s1, std::vector< std::string > s2, int kmer_size, int SSE);
RcppExport SEXP _dada2_kord_dist(SEXP s1SEXP, SEXP s2SEXP, SEXP kmer_sizeSEXP, SEXP SSESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type kmer_size(kmer_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type SSE(SSESEXP);
    rcpp_result_gen = Rcpp::wrap(kord_dist(s1, s2, kmer_size, SSE));
    return rcpp_result_gen;
END_RCPP
}
// kmer_matches
Rcpp::IntegerVector kmer_matches(std::vector< std::string > s1, std::vector< std::string > s2, int kmer_size);
RcppExport SEXP _dada2_kmer_matches(SEXP s1SEXP, SEXP s2SEXP, SEXP kmer_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type kmer_size(kmer_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(kmer_matches(s1, s2, kmer_size));
    return rcpp_result_gen;
END_RCPP
}
// kdist_matches
Rcpp::IntegerVector kdist_matches(std::vector< std::string > s1, std::vector< std::string > s2, int kmer_size);
RcppExport SEXP _dada2_kdist_matches(SEXP s1SEXP, SEXP s2SEXP, SEXP kmer_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::vector< std::string > >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type kmer_size(kmer_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(kdist_matches(s1, s2, kmer_size));
    return rcpp_result_gen;
END_RCPP
}
// C_subpos
Rcpp::DataFrame C_subpos(std::string s1, std::string s2);
RcppExport SEXP _dada2_C_subpos(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(C_subpos(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// C_matchRef
Rcpp::IntegerVector C_matchRef(std::vector<std::string> seqs, std::string ref, unsigned int word_size, bool non_overlapping);
RcppExport SEXP _dada2_C_matchRef(SEXP seqsSEXP, SEXP refSEXP, SEXP word_sizeSEXP, SEXP non_overlappingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< std::string >::type ref(refSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type word_size(word_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type non_overlapping(non_overlappingSEXP);
    rcpp_result_gen = Rcpp::wrap(C_matchRef(seqs, ref, word_size, non_overlapping));
    return rcpp_result_gen;
END_RCPP
}
// C_matrixEE
Rcpp::NumericVector C_matrixEE(Rcpp::IntegerMatrix inp);
RcppExport SEXP _dada2_C_matrixEE(SEXP inpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type inp(inpSEXP);
    rcpp_result_gen = Rcpp::wrap(C_matrixEE(inp));
    return rcpp_result_gen;
END_RCPP
}
// C_nwvec
Rcpp::CharacterVector C_nwvec(std::vector<std::string> s1, std::vector<std::string> s2, int16_t match, int16_t mismatch, int16_t gap_p, int band, bool endsfree);
RcppExport SEXP _dada2_C_nwvec(SEXP s1SEXP, SEXP s2SEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP gap_pSEXP, SEXP bandSEXP, SEXP endsfreeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int16_t >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int16_t >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int16_t >::type gap_p(gap_pSEXP);
    Rcpp::traits::input_parameter< int >::type band(bandSEXP);
    Rcpp::traits::input_parameter< bool >::type endsfree(endsfreeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_nwvec(s1, s2, match, mismatch, gap_p, band, endsfree));
    return rcpp_result_gen;
END_RCPP
}
// C_assign_taxonomy
Rcpp::List C_assign_taxonomy(std::vector<std::string> seqs, std::vector<std::string> rcs, std::vector<std::string> refs, std::vector<int> ref_to_genus, Rcpp::IntegerMatrix genusmat, bool try_rc, bool verbose);
RcppExport SEXP _dada2_C_assign_taxonomy(SEXP seqsSEXP, SEXP rcsSEXP, SEXP refsSEXP, SEXP ref_to_genusSEXP, SEXP genusmatSEXP, SEXP try_rcSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rcs(rcsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type refs(refsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type ref_to_genus(ref_to_genusSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type genusmat(genusmatSEXP);
    Rcpp::traits::input_parameter< bool >::type try_rc(try_rcSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(C_assign_taxonomy(seqs, rcs, refs, ref_to_genus, genusmat, try_rc, verbose));
    return rcpp_result_gen;
END_RCPP
}
// C_assign_taxonomy2
Rcpp::List C_assign_taxonomy2(std::vector<std::string> seqs, std::vector<std::string> rcs, std::vector<std::string> refs, std::vector<int> ref_to_genus, Rcpp::IntegerMatrix genusmat, bool try_rc, bool verbose);
RcppExport SEXP _dada2_C_assign_taxonomy2(SEXP seqsSEXP, SEXP rcsSEXP, SEXP refsSEXP, SEXP ref_to_genusSEXP, SEXP genusmatSEXP, SEXP try_rcSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type seqs(seqsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rcs(rcsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type refs(refsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type ref_to_genus(ref_to_genusSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type genusmat(genusmatSEXP);
    Rcpp::traits::input_parameter< bool >::type try_rc(try_rcSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(C_assign_taxonomy2(seqs, rcs, refs, ref_to_genus, genusmat, try_rc, verbose));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int _dada2_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _dada2_RcppExport_registerCCallable() { 
    R_RegisterCCallable("dada2", "_dada2_RcppExport_validate", (DL_FUNC)_dada2_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_dada2_dada_uniques", (DL_FUNC) &_dada2_dada_uniques, 21},
    {"_dada2_C_is_bimera", (DL_FUNC) &_dada2_C_is_bimera, 8},
    {"_dada2_C_table_bimera2", (DL_FUNC) &_dada2_C_table_bimera2, 10},
    {"_dada2_C_nwalign", (DL_FUNC) &_dada2_C_nwalign, 8},
    {"_dada2_C_eval_pair", (DL_FUNC) &_dada2_C_eval_pair, 2},
    {"_dada2_C_pair_consensus", (DL_FUNC) &_dada2_C_pair_consensus, 4},
    {"_dada2_C_isACGT", (DL_FUNC) &_dada2_C_isACGT, 1},
    {"_dada2_evaluate_kmers", (DL_FUNC) &_dada2_evaluate_kmers, 6},
    {"_dada2_kmer_dist", (DL_FUNC) &_dada2_kmer_dist, 3},
    {"_dada2_kord_dist", (DL_FUNC) &_dada2_kord_dist, 4},
    {"_dada2_kmer_matches", (DL_FUNC) &_dada2_kmer_matches, 3},
    {"_dada2_kdist_matches", (DL_FUNC) &_dada2_kdist_matches, 3},
    {"_dada2_C_subpos", (DL_FUNC) &_dada2_C_subpos, 2},
    {"_dada2_C_matchRef", (DL_FUNC) &_dada2_C_matchRef, 4},
    {"_dada2_C_matrixEE", (DL_FUNC) &_dada2_C_matrixEE, 1},
    {"_dada2_C_nwvec", (DL_FUNC) &_dada2_C_nwvec, 7},
    {"_dada2_C_assign_taxonomy", (DL_FUNC) &_dada2_C_assign_taxonomy, 7},
    {"_dada2_C_assign_taxonomy2", (DL_FUNC) &_dada2_C_assign_taxonomy2, 7},
    {"_dada2_RcppExport_registerCCallable", (DL_FUNC) &_dada2_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_dada2(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
