This archive contains files needed to redo all the computations described in the paper "A Mechanistic Modeling Framework for Predicting Metabolic Interactions in Complex Mixtures", published in Environmental Health Perspectives by Shu Cheng and  Frederic Y. Bois.
Please refer to the GNU MCSim User?s Manual  (http://www.gnu.org/software/mcsim) for instruction on the use and format of the computer files provided.
Folder Model_type_1_files includes a PBPK template, four SBML models, a GNU MCSim model compilation file (SBML_List.model) and the mod-generated C file needed to compile an executable corresponding to the main model (I) described in the paper.
Folder Model_type_2_files include similar files for making  model II, a variant of model I.
Folder Model_type_3_files include similar files for making  model III.
Folder Sensitivity_analysis contains files to perform a global sensitivity analysis of model I, on the basis of benzene data.
Folder  Calibration includes input files and some summary result files for the Bayesian calibration of model I. Five MCMC start files (".in" files) and 5 follow-up files (.in) are provided (a pair for each simulated Markov chain), together with the convergence diagnostic and summary statistics file convanal.out. The maximum posterior parameter vector we obtained is given in BTEX.23para.MPV.dat. A fit-checking file and its results (BTEX.MCMC.fit.in and BTEX.MCMC.fit.MPV.out) are provided.
Folder Prediction_type_1 provides input files for pure predictions of interactions using model I.
Folder Prediction_type_2 provides input files for pure predictions of interactions using model II.
Folder Prediction_type_3 does the same for model III.
