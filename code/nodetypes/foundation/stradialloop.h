/* BEGIN EXCLUDE */
/* END EXCLUDE */

class STRadialLoop : public STLoop
{
public:
	/* BEGIN SEQUENCETREE -- this section generated by SequenceTree -- do not edit */
	STIterator angle;
	STIterator PE;
	STVector3 readout_dir1;
	STVector3 readout_dir2;
	STVector3 PE_dir;
	STGradientEchoBlock *Block;
	/* END SEQUENCETREE -- this section generated by SequenceTree -- do not edit */
	
	STRadialLoop();
	bool prepare();
	
	bool loopRun();
};
