# webcam_point_features
Detection of ORB features from online webcam imges.

# My notes
Source: https://docs.opencv.org/trunk/db/d95/classcv_1_1ORB.html

## Public Member Functions
* virtual String **getDefaultName()** const CV_OVERRIDE
    * Return the object name
* virtual int **getEdgeThreshold()** const=0
* virtual int **getFastThreshold()** const=0
* virtual int **getFirstLevel()** const=0
* virtual int **getMaxFeatures()** const=0
* virtual int **getNLevels()** const=0
* virtual int **getPatchSize()** const=0
* virtual double **getScaleFactor()** const=0
* virtual ORB::ScoreType **getScoreType()** const=0
* virtual int **getWTA_K()** const=0
* virtual void **setEdgeThreshold(int edgeThreshold)=0**
* virtual void **setFastThreshold(int fastThreshold)=0**
* virtual void **setFirstLevel(int firstLevel)=0**
* virtual void **setMaxFeatures(int maxFeatures)=0**
* virtual void **setNLevels(int nlevels)=0**
* virtual void **setPatchSize(int patchSize)=0**
* virtual void **setScaleFactor(double scaleFactor)=0**
* virtual void **setScoreType(ORB::ScoreType scoreType)=0**
* virtual void **setWTA_K(int wta_k)=0**