# webcam_point_features
Detection of ORB features from online webcam imges.

# My notes
Source: https://docs.opencv.org/trunk/db/d95/classcv_1_1ORB.html

## Public Member Functions
* virtual String ** getDefaultName() ** const CV_OVERRIDE
    * Return the object name (String)
* virtual int ** getEdgeThreshold() ** const =0
* virtual int ** getFastThreshold() ** const =0
* virtual int ** getFirstLevel() ** const =0
* virtual int ** getMaxFeatures() ** const =0
* virtual int ** getNLevels() ** const =0
* virtual int ** getPatchSize() ** const =0
* virtual double ** getScaleFactor() ** const =0
* virtual ORB ** ScoreType   **getScoreType() const =0
* virtual int ** getWTA_K() ** const =0
* virtual void ** setEdgeThreshold(i **nt edgeThreshold)=0
* virtual void ** setFastThreshold(i **nt fastThreshold)=0
* virtual void ** setFirstLevel(i **nt firstLevel)=0
* virtual void ** setMaxFeatures(i **nt maxFeatures)=0
* virtual void ** setNLevels(i **nt nlevels)=0
* virtual void ** setPatchSize(i **nt patchSize)=0
* virtual void ** setScaleFactor(d **ouble scaleFactor)=0
* virtual void ** setScoreType(O **RB::ScoreType scoreType)=0
* virtual void ** setWTA_K(i **nt wta_k)=0