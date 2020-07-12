#pragma once
namespace Eloquent {
    namespace ML {
        namespace Test {
            /**
            * A tailor made test set
            */
            class IrisTestSet {
            public:
                IrisTestSet() :
                        _x{
                                {   0.726348457434  ,  0.380468239608  ,  0.541879007927  ,  0.184469449507  },
                                {   0.759117071609  ,  0.393114197798  ,  0.488003831749  ,  0.176223605909  },
                                {   0.769230769231  ,  0.307692307692  ,  0.538461538462  ,  0.153846153846  },
                                {   0.765783108489  ,  0.603790527847  ,  0.220898973603  ,  0.01472659824  },
                                {   0.825122952481  ,  0.528078689588  ,  0.198029508595  ,  0.033004918099  },
                                {   0.786090375542  ,  0.571702091303  ,  0.232253974592  ,  0.035731380706  },
                                {   0.803735188074  ,  0.55070744368  ,  0.223259774465  ,  0.029767969929  },
                                {   0.755192851801  ,  0.339289542114  ,  0.536296373018  ,  0.164172359087  },
                                {   0.753849162023  ,  0.31524601321  ,  0.548253936017  ,  0.178182529206  },
                                {   0.770118538251  ,  0.353497033951  ,  0.504995762788  ,  0.164123622906  },
                                {   0.817689418059  ,  0.517313713466  ,  0.250313087161  ,  0.033375078288  },
                                {   0.743148202166  ,  0.365055257204  ,  0.534545198049  ,  0.169489940845  },
                                {   0.80218491852  ,  0.545485744593  ,  0.240655475556  ,  0.032087396741  },
                                {   0.806423656152  ,  0.531506500645  ,  0.256589345139  ,  0.036655620734  },
                                {   0.803274123688  ,  0.551266555472  ,  0.220506622189  ,  0.04725141904  },
                                {   0.812283631381  ,  0.536107196711  ,  0.227439416787  ,  0.032491345255  },
                                {   0.803772773015  ,  0.551608765795  ,  0.220643506318  ,  0.031520500903  },
                                {   0.802512599037  ,  0.559892510956  ,  0.205293920684  ,  0.018663083699  },
                                {   0.759165471524  ,  0.371836149318  ,  0.511274705312  ,  0.154931728882  },
                                {   0.822105846519  ,  0.513816154074  ,  0.239780871901  ,  0.051381615407  },
                                {   0.773811110254  ,  0.597327874582  ,  0.203634502699  ,  0.054302534053  },
                                {   0.761851879395  ,  0.340112446158  ,  0.530575416007  ,  0.14964947631  },
                                {   0.778674472842  ,  0.594624142898  ,  0.198208047633  ,  0.028315435376  },
                                {   0.775770745958  ,  0.607124931619  ,  0.168645814339  ,  0.033729162868  },
                                {   0.805977915082  ,  0.521515121524  ,  0.268659305027  ,  0.079017442655  },
                                {   0.764672694551  ,  0.314865227168  ,  0.53976896086  ,  0.157432613584  },
                                {   0.807795684898  ,  0.538530456599  ,  0.237586966146  ,  0.031678262153  },
                                {   0.798370248271  ,  0.557352814831  ,  0.22595384385  ,  0.03012717918  },
                                {   0.772429247764  ,  0.337060035388  ,  0.519634221223  ,  0.140441681412  },
                                {   0.802124132514  ,  0.546902817623  ,  0.23699122097  ,  0.036460187842  },
                        },
                        _y{    1  ,  1  ,  1  ,  0  ,  0  ,  0  ,  0  ,  1  ,  1  ,  1  ,  0  ,  1  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  1  ,  0  ,  0  ,  1  ,  0  ,  0  ,  0  ,  1  ,  0  ,  0  ,  1  ,  0   },
                        _tp(0),
                        _tn(0),
                        _fp(0),
                        _fn(0)
                {}

                template<class Classifier>
                void test(Classifier clf) {
                    for (uint16_t i = 0; i < 30; i++) {
                        int predicted = clf.predict(_x[i]);
                        int actual = _y[i];

                        if (predicted > 0 && predicted == actual)       _tp++;
                        else if (predicted > 0 && predicted != actual)  _fp++;
                        else if (predicted <= 0 && predicted == actual) _tn++;
                        else _fn++;
                    }
                }

                String dump() {
                    return String("Support:\t")
                           + support()
                           + "\nTP:\t"
                           + _tp
                           + "\nTN:\t"
                           + _tn
                           + "\nFP:\t"
                           + _fp
                           + "\nFN:\t"
                           + _fn
                           + "\nAccuracy:\t"
                           + accuracy()
                           + "\nPrecision:\t"
                           + precision()
                           + "\nRecall:\t"
                           + recall()
                           + "\nSpecificity:\t"
                           + specificity()
                            ;
                }

                float accuracy() {
                    return (1.0f * _tp + _tn) / support();
                }

                float precision() {
                    return (1.0f * _tp) / (_tp + _fp);
                }

                float recall() {
                    return (1.0f * _tp) / (_tp + _fn);
                }

                float specificity() {
                    return (1.0f * _tn) / (_tn + _fp);
                }

                uint16_t support() {
                    return _tp + _tn + _fp + _fn;
                }

            protected:
                float _x[30][4];
                int _y[30];
                uint16_t _tp, _fp, _tn, _fn;
            };
        }
    }
}