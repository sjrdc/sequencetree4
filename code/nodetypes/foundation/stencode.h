/* BEGIN EXCLUDE */
/* END EXCLUDE */

class STEncode : public STNode {
public:
	/* BEGIN SEQUENCETREE -- this section generated by SequenceTree -- do not edit */
	STVector3 moment;
	STInteger do_rewind;
	STGradientMom *Gradient;
	/* END SEQUENCETREE */
	STEncode();
	bool prepare();
	double duration();
};