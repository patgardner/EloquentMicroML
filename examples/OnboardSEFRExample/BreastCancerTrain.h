#pragma once
namespace Eloquent {
    namespace ML {
        namespace Train {
            /**
            * A tailor made training set
            */
            class TrainSet {
            public:
                TrainSet() :
                        _x{
                                {   0.010697105051  ,  0.011857671316  ,  0.070960337291  ,  0.535319479079  ,  6.8970795e-05  ,  0.000103389875  ,  8.979467e-05  ,  5.140977e-05  ,  0.000132503508  ,  4.3206224e-05  ,  0.000221502361  ,  0.000454743021  ,  0.001447723517  ,  0.023231220704  ,  2.775411e-06  ,  1.9020023e-05  ,  1.7667134e-05  ,  6.01306e-06  ,  1.1293968e-05  ,  2.531361e-06  ,  0.013402882399  ,  0.018078306491  ,  0.088004081856  ,  0.836270890881  ,  9.5895932e-05  ,  0.000384910091  ,  0.000349761513  ,  0.000123616887  ,  0.000283178168  ,  8.1770183e-05  },
                                {   0.01420006255  ,  0.023834258834  ,  0.095577344086  ,  0.567784039497  ,  0.000139051382  ,  0.000211034776  ,  0.000203060894  ,  0.000102163988  ,  0.000256693438  ,  8.0710971e-05  ,  0.00033457532  ,  0.001094497129  ,  0.002628103884  ,  0.026565040093  ,  6.260043e-06  ,  3.8252784e-05  ,  3.8809863e-05  ,  1.3391751e-05  ,  2.3408257e-05  ,  4.09508e-06  ,  0.016919920685  ,  0.033566763243  ,  0.116003587908  ,  0.80754663409  ,  0.000186020819  ,  0.000589957983  ,  0.00058875644  ,  0.000225016376  ,  0.000478214414  ,  0.0001170959  },
                                {   0.012711538284  ,  0.019313008202  ,  0.083630981269  ,  0.535813127221  ,  0.000110240839  ,  0.000152519916  ,  8.6838999e-05  ,  5.5491289e-05  ,  0.000203607134  ,  6.9083641e-05  ,  0.000541005295  ,  0.001276716865  ,  0.003575178091  ,  0.047248722899  ,  8.163756e-06  ,  2.8084062e-05  ,  2.3068058e-05  ,  1.3425461e-05  ,  1.3777787e-05  ,  5.017859e-06  ,  0.015817566967  ,  0.026090640941  ,  0.102545305192  ,  0.831673948982  ,  0.000153354371  ,  0.000341385003  ,  0.00024829686  ,  0.000144268079  ,  0.000296324408  ,  0.000106717583  },
                                {   0.010902163268  ,  0.014103998386  ,  0.075297152671  ,  0.638660894634  ,  5.5392316e-05  ,  0.000139788823  ,  0.000117438535  ,  6.3581735e-05  ,  0.000136319694  ,  4.435935e-05  ,  0.000543402035  ,  0.002029155897  ,  0.006295615408  ,  0.066084056951  ,  1.785179e-06  ,  4.7185837e-05  ,  5.0558285e-05  ,  2.3260223e-05  ,  2.5500939e-05  ,  7.302231e-06  ,  0.011920153474  ,  0.017027165793  ,  0.086273248189  ,  0.757521203609  ,  5.8975187e-05  ,  0.000221967362  ,  0.000206953428  ,  0.000100490988  ,  0.000180622173  ,  5.8178993e-05  },
                                {   0.011036931482  ,  0.014234608763  ,  0.072590570858  ,  0.573274308453  ,  6.3360162e-05  ,  8.8084471e-05  ,  8.8875649e-05  ,  3.9677571e-05  ,  0.000125006106  ,  3.7290851e-05  ,  0.000304273828  ,  0.000606371917  ,  0.001983219229  ,  0.029794440482  ,  3.808203e-06  ,  1.6476279e-05  ,  2.4361686e-05  ,  7.878813e-06  ,  1.8388293e-05  ,  1.757074e-06  ,  0.013192891216  ,  0.019133318495  ,  0.088018539596  ,  0.810298016203  ,  0.000103050919  ,  0.000252847265  ,  0.000356623431  ,  0.000119533792  ,  0.000320624837  ,  5.6918656e-05  },
                                {   0.009751147532  ,  0.009202155312  ,  0.064676512049  ,  0.562586313381  ,  5.7461186e-05  ,  8.8152465e-05  ,  0.000103210537  ,  5.2755538e-05  ,  9.9707444e-05  ,  3.162718e-05  ,  0.000328820197  ,  0.000346806228  ,  0.002244593906  ,  0.037415126938  ,  3.290816e-06  ,  2.0882618e-05  ,  2.9039074e-05  ,  8.862303e-06  ,  1.2694792e-05  ,  1.848274e-06  ,  0.011931430921  ,  0.011147156321  ,  0.078741169884  ,  0.819305532591  ,  8.778647e-05  ,  0.000266130514  ,  0.000384033129  ,  0.000124333667  ,  0.000198630614  ,  4.8023748e-05  },
                                {   0.016957464646  ,  0.033063184493  ,  0.111346274708  ,  0.574695445677  ,  0.000190016522  ,  0.000188622757  ,  0.000161676649  ,  8.7791659e-05  ,  0.000293464799  ,  0.000106390669  ,  0.000366405127  ,  0.002211439225  ,  0.002821598227  ,  0.026280198634  ,  1.2488127e-05  ,  2.7317779e-05  ,  4.0186868e-05  ,  1.6059261e-05  ,  2.1014867e-05  ,  4.707826e-06  ,  0.019884369503  ,  0.05472847494  ,  0.135071238943  ,  0.795994230875  ,  0.000295632877  ,  0.00041781954  ,  0.000623012605  ,  0.000220524472  ,  0.000459013016  ,  0.000148761101  },
                                {   0.01250420285  ,  0.023684026582  ,  0.083186488425  ,  0.566559067245  ,  9.7952456e-05  ,  0.000137167837  ,  0.000140951778  ,  6.3329402e-05  ,  0.000198054877  ,  6.086124e-05  ,  0.000318194983  ,  0.000888365993  ,  0.002475900963  ,  0.02799255865  ,  4.821944e-06  ,  3.6463425e-05  ,  4.0771957e-05  ,  9.373852e-06  ,  1.5969948e-05  ,  4.700686e-06  ,  0.015015363258  ,  0.031931296549  ,  0.106724317312  ,  0.811139211028  ,  0.000144305725  ,  0.000565613082  ,  0.000604226473  ,  0.000147229679  ,  0.000362742281  ,  0.000115324182  },
                                {   0.01336047526  ,  0.020188226024  ,  0.087412068423  ,  0.659763027526  ,  7.0814734e-05  ,  8.4461806e-05  ,  8.3770601e-05  ,  4.5214883e-05  ,  0.000155689576  ,  4.499572e-05  ,  0.000339954553  ,  0.000908680904  ,  0.002447032157  ,  0.030834459623  ,  8.234605e-06  ,  2.635006e-05  ,  4.2576505e-05  ,  1.6791209e-05  ,  2.5127809e-05  ,  2.530482e-06  ,  0.014194978132  ,  0.023315504461  ,  0.094408405625  ,  0.738830067237  ,  9.5335631e-05  ,  0.000162180154  ,  0.000195728855  ,  9.4324112e-05  ,  0.000236779653  ,  5.2995147e-05  },
                                {   0.012419712768  ,  0.018966248112  ,  0.081663352325  ,  0.509881581395  ,  9.7356333e-05  ,  0.000134297496  ,  9.2091048e-05  ,  5.7590807e-05  ,  0.000184612297  ,  6.3426575e-05  ,  0.000346405242  ,  0.000771462429  ,  0.002269777326  ,  0.029300421763  ,  4.743432e-06  ,  2.0079159e-05  ,  2.0434542e-05  ,  8.940697e-06  ,  1.607642e-05  ,  3.102123e-06  ,  0.016254112041  ,  0.026186141378  ,  0.105773306779  ,  0.848430980635  ,  0.000143088558  ,  0.00034827568  ,  0.000342664364  ,  0.000139534725  ,  0.000349678509  ,  9.6047026e-05  },
                                {   0.014271661044  ,  0.023634390841  ,  0.092565321672  ,  0.575959593403  ,  0.000105265691  ,  0.00011345808  ,  8.9498594e-05  ,  5.691326e-05  ,  0.000189205165  ,  6.6937016e-05  ,  0.000210011231  ,  0.000663518455  ,  0.001445588142  ,  0.015702078097  ,  3.630225e-06  ,  1.4997706e-05  ,  1.5734588e-05  ,  7.426249e-06  ,  1.2061017e-05  ,  1.863877e-06  ,  0.017587627847  ,  0.03239027704  ,  0.114324999255  ,  0.802659023205  ,  0.000162872487  ,  0.00042305668  ,  0.000403984452  ,  0.00017414244  ,  0.00040019168  ,  0.000104225388  },
                                {   0.011359644435  ,  0.016479284436  ,  0.072823688106  ,  0.565713129218  ,  5.8188041e-05  ,  4.7289306e-05  ,  2.3392926e-05  ,  2.3563108e-05  ,  0.000108349168  ,  4.0396938e-05  ,  0.000269100191  ,  0.000841691507  ,  0.001748619424  ,  0.028725293137  ,  2.856929e-06  ,  6.572568e-06  ,  7.807096e-06  ,  5.382713e-06  ,  1.0352735e-05  ,  2.157056e-06  ,  0.013607464214  ,  0.024024017069  ,  0.087785516918  ,  0.815455124845  ,  8.3743696e-05  ,  0.000109980078  ,  0.000103456437  ,  7.0731868e-05  ,  0.000209040149  ,  5.9932406e-05  },
                                {   0.009282902644  ,  0.012511738347  ,  0.062184983899  ,  0.542125500654  ,  5.3016685e-05  ,  9.4024892e-05  ,  0.000115550463  ,  6.1985673e-05  ,  0.000108773894  ,  3.0878233e-05  ,  0.000413918799  ,  0.00073047425  ,  0.002777396637  ,  0.05231909703  ,  3.113235e-06  ,  1.681187e-05  ,  2.5890479e-05  ,  5.770049e-06  ,  1.0000422e-05  ,  2.272144e-06  ,  0.011535115202  ,  0.016946404667  ,  0.079973476889  ,  0.832122781335  ,  7.4293118e-05  ,  0.000212116568  ,  0.000305593354  ,  9.2081611e-05  ,  0.000171606638  ,  4.8741467e-05  },
                                {   0.014018671469  ,  0.019862445681  ,  0.091520529457  ,  0.569049488805  ,  0.000123262123  ,  0.000131032533  ,  0.000130500313  ,  7.8129877e-05  ,  0.000226512778  ,  7.2137082e-05  ,  0.000305600651  ,  0.000951289802  ,  0.0020192422  ,  0.025812663867  ,  6.95292e-06  ,  2.4865312e-05  ,  3.0921975e-05  ,  1.2932943e-05  ,  1.8553185e-05  ,  3.877754e-06  ,  0.016679770837  ,  0.029751090932  ,  0.109424406003  ,  0.808335543956  ,  0.000190108939  ,  0.000443445599  ,  0.000532858537  ,  0.000222255019  ,  0.000415131501  ,  0.000125497446  },
                                {   0.006924921347  ,  0.008892181285  ,  0.045750231121  ,  0.376233264293  ,  4.6623645e-05  ,  6.0598261e-05  ,  6.3426457e-05  ,  3.8139056e-05  ,  8.2974283e-05  ,  2.6327178e-05  ,  0.00033555715  ,  0.000375027122  ,  0.002268795552  ,  0.0426724883  ,  2.515431e-06  ,  7.827449e-06  ,  1.1400126e-05  ,  4.699796e-06  ,  6.105576e-06  ,  1.164967e-06  ,  0.011005010141  ,  0.01312615722  ,  0.073616280986  ,  0.921243290304  ,  7.507197e-05  ,  0.000148813025  ,  0.000195270305  ,  8.7133395e-05  ,  0.000150268714  ,  3.9777746e-05  },
                                {   0.01494386853  ,  0.024608948832  ,  0.101875170752  ,  0.629427470574  ,  0.000123099165  ,  0.0002495724  ,  0.000231613636  ,  8.7344898e-05  ,  0.000225192017  ,  8.3611652e-05  ,  0.000230851749  ,  0.001272351224  ,  0.002243212894  ,  0.020908355023  ,  6.997388e-06  ,  6.4608014e-05  ,  5.9873431e-05  ,  1.7719314e-05  ,  2.1343719e-05  ,  8.808502e-06  ,  0.016358801457  ,  0.034840002305  ,  0.118419001899  ,  0.759383617879  ,  0.000179696482  ,  0.000840796682  ,  0.000755683024  ,  0.000240320916  ,  0.000391392216  ,  0.000155751463  },
                                {   0.02513116435  ,  0.051636018504  ,  0.158556919053  ,  0.619080293113  ,  0.000263699382  ,  0.000182228538  ,  4.8692397e-05  ,  1.8143131e-05  ,  0.000542423496  ,  0.000199399661  ,  0.000479258295  ,  0.00293350231  ,  0.00335450144  ,  0.025158760797  ,  2.7498326e-05  ,  5.0470835e-05  ,  4.8692397e-05  ,  1.8143131e-05  ,  7.8925838e-05  ,  7.917114e-06  ,  0.027486061156  ,  0.067335330544  ,  0.175574728002  ,  0.742651049986  ,  0.000397695463  ,  0.000416093094  ,  0.000210959506  ,  7.8619211e-05  ,  0.00095207742  ,  0.000227180084  },
                                {   0.010386336869  ,  0.011301629318  ,  0.068144638998  ,  0.610567035744  ,  5.2685126e-05  ,  5.9494009e-05  ,  8.3157668e-05  ,  4.3147109e-05  ,  9.4710444e-05  ,  3.1806413e-05  ,  0.000476007884  ,  0.001031936425  ,  0.003143248213  ,  0.052205155872  ,  5.99963e-06  ,  1.5191622e-05  ,  2.8357323e-05  ,  1.0665389e-05  ,  1.2797351e-05  ,  2.353529e-06  ,  0.011893220779  ,  0.01521394643  ,  0.078078910695  ,  0.783021527559  ,  7.4674469e-05  ,  0.000118150861  ,  0.000192323035  ,  8.3157668e-05  ,  0.000130652416  ,  4.1416983e-05  },
                                {   0.007925414861  ,  0.004572863049  ,  0.054098996384  ,  0.440986118736  ,  5.2160596e-05  ,  0.000122295451  ,  0.000132207727  ,  6.4804254e-05  ,  0.000106567974  ,  3.4675342e-05  ,  0.000482397403  ,  0.000398825907  ,  0.003783845928  ,  0.067579690923  ,  2.819051e-06  ,  2.1604355e-05  ,  2.3670514e-05  ,  6.991458e-06  ,  1.3229584e-05  ,  2.728299e-06  ,  0.011181046647  ,  0.007634654783  ,  0.081324712806  ,  0.889461512215  ,  7.1456492e-05  ,  0.000293227133  ,  0.000313624394  ,  0.000116920795  ,  0.000202695018  ,  5.2380869e-05  },
                                {   0.010352772294  ,  0.01709899058  ,  0.069289142674  ,  0.495579766551  ,  7.3213723e-05  ,  0.000114827808  ,  0.000113880495  ,  5.9213798e-05  ,  0.000130323134  ,  4.4253027e-05  ,  0.000297050133  ,  0.000684771605  ,  0.00236692794  ,  0.029434352601  ,  3.540919e-06  ,  2.0685245e-05  ,  2.4197068e-05  ,  7.328139e-06  ,  1.1963204e-05  ,  2.007626e-06  ,  0.01371573166  ,  0.024839886988  ,  0.101024111341  ,  0.858671113808  ,  0.000111038558  ,  0.00041343424  ,  0.000428658905  ,  0.000136954321  ,  0.000272487673  ,  6.682613e-05  },
                                {   0.016324654525  ,  0.029132789774  ,  0.110899010337  ,  0.551921988799  ,  0.000203700812  ,  0.000405829196  ,  0.000345076322  ,  0.000150381231  ,  0.000371235795  ,  0.000139288471  ,  0.000708449981  ,  0.001652478164  ,  0.004924556466  ,  0.03892472353  ,  1.3022557e-05  ,  0.000106610572  ,  8.0922828e-05  ,  2.668838e-05  ,  8.5239855e-05  ,  1.3162646e-05  ,  0.021313537563  ,  0.037881203582  ,  0.141332626347  ,  0.811515444293  ,  0.000299904774  ,  0.001238357987  ,  0.000981909386  ,  0.00036809094  ,  0.000948888413  ,  0.000247299933  },
                                {   0.016996127423  ,  0.024026758798  ,  0.107755186987  ,  0.683236496113  ,  0.000117172842  ,  4.9123113e-05  ,  3.3418326e-05  ,  3.8127153e-05  ,  0.000191353177  ,  7.6476051e-05  ,  0.000239876273  ,  0.00305486803  ,  0.00152612963  ,  0.018470081682  ,  5.67668e-06  ,  6.390179e-06  ,  1.7517881e-05  ,  1.5183033e-05  ,  3.4840105e-05  ,  2.317891e-06  ,  0.017348311184  ,  0.029753005873  ,  0.110168297941  ,  0.712063389133  ,  0.000126538321  ,  6.0249511e-05  ,  6.3040893e-05  ,  6.5388785e-05  ,  0.00025918116  ,  8.0467467e-05  },
                                {   0.01436502592  ,  0.027715507474  ,  0.096808284634  ,  0.548660981985  ,  0.000136732911  ,  0.000276232762  ,  0.000262052198  ,  9.8491506e-05  ,  0.000234036939  ,  9.5032832e-05  ,  0.000343100459  ,  0.00184347323  ,  0.002350745413  ,  0.027600218341  ,  8.24202e-06  ,  8.3204167e-05  ,  8.9268375e-05  ,  1.6509404e-05  ,  2.0625226e-05  ,  1.1621145e-05  ,  0.017397130107  ,  0.046899619137  ,  0.112579837972  ,  0.820166889229  ,  0.000213630763  ,  0.001219759023  ,  0.001273944915  ,  0.000254788983  ,  0.000503352353  ,  0.00023922495  },
                                {   0.011795821174  ,  0.018630224321  ,  0.077639218253  ,  0.438955980527  ,  0.000110486197  ,  0.000151034332  ,  0.000121345525  ,  5.1626643e-05  ,  0.000229241423  ,  7.7698994e-05  ,  0.000480699638  ,  0.001026156741  ,  0.003462033664  ,  0.040847015891  ,  5.530287e-06  ,  3.4012613e-05  ,  4.1893098e-05  ,  1.0401045e-05  ,  2.2645187e-05  ,  5.645855e-06  ,  0.016757239202  ,  0.028015075289  ,  0.118954480424  ,  0.885383976156  ,  0.000163089183  ,  0.000575345163  ,  0.000693004494  ,  0.000154023138  ,  0.000474323519  ,  0.000139676869  },
                                {   0.022222090582  ,  0.029086995669  ,  0.141085958091  ,  0.640428304959  ,  0.000239429932  ,  0.000151794836  ,  6.9116687e-05  ,  4.8540678e-05  ,  0.000424380202  ,  0.000161451531  ,  0.000648378127  ,  0.002283937088  ,  0.004463591216  ,  0.036709472026  ,  2.2460585e-05  ,  3.348278e-05  ,  4.6412931e-05  ,  3.3225579e-05  ,  4.7394968e-05  ,  6.939727e-06  ,  0.02391961139  ,  0.036615944708  ,  0.152285854334  ,  0.736293805153  ,  0.00030957542  ,  0.000268423401  ,  0.000207326681  ,  0.000145598651  ,  0.000572854818  ,  0.000181746959  },
                                {   0.013731964249  ,  0.022048793786  ,  0.08805213385  ,  0.575230347616  ,  8.3393075e-05  ,  6.1620146e-05  ,  3.1775602e-05  ,  2.0751205e-05  ,  0.000182275478  ,  5.7083694e-05  ,  0.000243681062  ,  0.000844454498  ,  0.00160614939  ,  0.020975984079  ,  3.351253e-06  ,  1.1259393e-05  ,  1.4201957e-05  ,  7.03048e-06  ,  1.4099785e-05  ,  1.313936e-06  ,  0.016276055839  ,  0.030907136795  ,  0.104726661866  ,  0.805015969603  ,  0.000111776554  ,  0.000208738117  ,  0.000213029356  ,  0.000113615657  ,  0.000305904025  ,  7.3012363e-05  },
                                {   0.011215358643  ,  0.009606781308  ,  0.073407299029  ,  0.609663576546  ,  6.2855798e-05  ,  7.3854126e-05  ,  6.3034529e-05  ,  5.0765935e-05  ,  0.000111004603  ,  3.9250564e-05  ,  0.000383186101  ,  0.000525021769  ,  0.0029713998  ,  0.039001617136  ,  3.591851e-06  ,  1.9360377e-05  ,  2.174771e-05  ,  8.642912e-06  ,  1.2287744e-05  ,  2.38861e-06  ,  0.012772870031  ,  0.012460091105  ,  0.086109953383  ,  0.783223964424  ,  8.0109705e-05  ,  0.000179496804  ,  0.000158878928  ,  9.2940024e-05  ,  0.000175922188  ,  5.0548904e-05  },
                                {   0.009883338019  ,  0.006985069847  ,  0.065807736142  ,  0.631773751115  ,  4.8856521e-05  ,  6.4687397e-05  ,  9.6446571e-05  ,  5.0804936e-05  ,  8.8117095e-05  ,  2.8656322e-05  ,  0.000368835069  ,  0.000380574273  ,  0.002648870978  ,  0.046002091793  ,  5.596824e-06  ,  1.1987627e-05  ,  2.770647e-05  ,  9.181908e-06  ,  8.553544e-06  ,  2.491536e-06  ,  0.010979321781  ,  0.008120021921  ,  0.074137212737  ,  0.767188633775  ,  6.6928075e-05  ,  9.9856298e-05  ,  0.000194841558  ,  7.9154383e-05  ,  0.000115151361  ,  3.7399837e-05  },
                                {   0.012576897514  ,  0.011691431457  ,  0.08403728782  ,  0.577520639419  ,  8.7972693e-05  ,  0.000175043521  ,  0.000170288241  ,  7.99871e-05  ,  0.000206690734  ,  5.7653679e-05  ,  0.000359761579  ,  0.000581783995  ,  0.002774460312  ,  0.036820630205  ,  5.566138e-06  ,  4.3682992e-05  ,  5.2849206e-05  ,  1.8463607e-05  ,  3.0105846e-05  ,  3.602535e-06  ,  0.014815158936  ,  0.015643233674  ,  0.102566484939  ,  0.804216347538  ,  0.000113962761  ,  0.000488154158  ,  0.000516931805  ,  0.000196196322  ,  0.000382636119  ,  8.1544865e-05  },
                                {   0.00948317639  ,  0.010382129549  ,  0.062147281986  ,  0.540411147702  ,  4.9172218e-05  ,  5.6639245e-05  ,  5.8561862e-05  ,  3.8452332e-05  ,  9.3220923e-05  ,  2.9836931e-05  ,  0.00023211698  ,  0.000401774903  ,  0.001652411009  ,  0.028013043243  ,  2.241667e-06  ,  7.181233e-06  ,  1.1712372e-05  ,  5.398915e-06  ,  7.113681e-06  ,  1.132265e-06  ,  0.011889045249  ,  0.014372858024  ,  0.079606719065  ,  0.834519522317  ,  7.4930084e-05  ,  0.000133855684  ,  0.000196626518  ,  0.000100391763  ,  0.000159161476  ,  4.3482312e-05  },
                                {   0.013809613757  ,  0.021048758653  ,  0.090736430604  ,  0.613437579541  ,  9.5194271e-05  ,  0.000106406708  ,  0.000127823723  ,  5.4249977e-05  ,  0.00018267454  ,  5.9357112e-05  ,  0.000277161371  ,  0.000987508521  ,  0.002574887281  ,  0.024140173944  ,  5.696345e-06  ,  2.9024416e-05  ,  4.6661958e-05  ,  1.1251201e-05  ,  1.9653261e-05  ,  3.897703e-06  ,  0.015398930709  ,  0.029421745521  ,  0.112608920605  ,  0.774888923541  ,  0.000140131239  ,  0.000410702759  ,  0.000502573031  ,  0.000140228148  ,  0.000348002267  ,  9.8266304e-05  },
                                {   0.009527505133  ,  0.012395249206  ,  0.0640995757  ,  0.551566107351  ,  4.536931e-05  ,  0.000109413929  ,  0.000105267191  ,  4.9765851e-05  ,  0.000115409213  ,  3.1690071e-05  ,  0.000490164409  ,  0.000832345231  ,  0.004411529645  ,  0.052408772338  ,  3.271427e-06  ,  5.0260462e-05  ,  4.8576787e-05  ,  1.3179632e-05  ,  2.664404e-05  ,  3.819995e-06  ,  0.012035532179  ,  0.01657196357  ,  0.088630278482  ,  0.82485112612  ,  6.2300991e-05  ,  0.000371907437  ,  0.000361815376  ,  0.00012455202  ,  0.00023331646  ,  5.1859205e-05  },
                                {   0.014872464628  ,  0.024585319585  ,  0.095816597539  ,  0.618491672069  ,  9.6489111e-05  ,  8.4868964e-05  ,  5.2378858e-05  ,  3.7307947e-05  ,  0.000199438758  ,  6.3039846e-05  ,  0.000257759987  ,  0.001491656386  ,  0.001912804013  ,  0.022270110117  ,  4.911552e-06  ,  1.5236283e-05  ,  2.3096971e-05  ,  1.3053371e-05  ,  1.8091708e-05  ,  2.156452e-06  ,  0.016702582588  ,  0.035080935838  ,  0.109145589189  ,  0.770413512374  ,  0.000128108257  ,  0.000188634448  ,  0.000251586095  ,  0.000141338026  ,  0.000316522209  ,  7.625859e-05  },
                                {   0.013055345358  ,  0.019278572398  ,  0.087223675676  ,  0.577372200762  ,  9.4378148e-05  ,  0.000167266016  ,  0.00012759854  ,  7.8645472e-05  ,  0.000201650465  ,  6.1999459e-05  ,  0.000227886515  ,  0.000880385155  ,  0.001889353821  ,  0.01884876679  ,  3.986447e-06  ,  2.7355336e-05  ,  2.4006434e-05  ,  1.2106191e-05  ,  1.3019528e-05  ,  3.322935e-06  ,  0.015777447546  ,  0.029737175539  ,  0.109600430169  ,  0.803109688063  ,  0.000136552824  ,  0.000594833054  ,  0.000495977764  ,  0.000241855198  ,  0.000381810649  ,  0.000114167115  },
                                {   0.007102607044  ,  0.007733651526  ,  0.04605282072  ,  0.47126938988  ,  3.1646209e-05  ,  3.4304652e-05  ,  3.6822117e-05  ,  2.897434e-05  ,  5.93786e-05  ,  1.7716238e-05  ,  0.000232177377  ,  0.000378291027  ,  0.001444353408  ,  0.031548867489  ,  1.58701e-06  ,  4.225984e-06  ,  5.756603e-06  ,  3.484171e-06  ,  3.635219e-06  ,  6.6696e-07  ,  0.009791259332  ,  0.011946209107  ,  0.063104448218  ,  0.877756021749  ,  4.702624e-05  ,  8.7272109e-05  ,  0.000105901348  ,  6.7434487e-05  ,  9.4723805e-05  ,  2.5261919e-05  },
                        },
                        _y{    0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  1  ,  0  ,  0  ,  0  ,  0  ,  1  ,  0  ,  0  ,  1  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  0  ,  1  ,  0  ,  0   }

                {}

                template<class Classifier>
                void fit(Classifier *clf) {
                    clf->fit(_x, _y, 35);
                }

            protected:
                float _x[35][30];
                int _y[35];
            };
        }
    }
}