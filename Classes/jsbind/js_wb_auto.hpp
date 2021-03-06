#include "base/ccConfig.h"
#ifndef __wb_h__
#define __wb_h__

#include "jsapi.h"
#include "jsfriendapi.h"

extern JSClass  *jsb_PlatformHelper_class;
extern JSObject *jsb_PlatformHelper_prototype;

bool js_wb_PlatformHelper_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_PlatformHelper_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_PlatformHelper(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_PlatformHelper_loadInviteCode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getStoreChainData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_openUrl(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_showToast(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_openSavedPhotosAlbum(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_sdkDoForInt_C(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_loadCode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_weiXin_sysInfo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_cConViewV(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_showOpenLocationDialog(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getStringByPasteBord(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_openCamera(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_sdkDoForVoid_C(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_IOSPay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_iphoneTypeName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_askExitGame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_checkIsInstallWeiXin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_WeFriendsCircleShareURL(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_registWeiXinLoginId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_removeIosUpdateTip(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_loadCodeNew(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_iphoneVersion(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_WeChatShareText(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_vibrate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getUserAddress(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_cConViewH(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getPowStateSig(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_WeFriendsCircleShare(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_stopRecord(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_openPhotoLibrary(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getGPSInfo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_WeChatFrendsCircleShareImage(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_encryptWithString(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_IOSPayClearId(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_WeChatShareImage(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_playRecord(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_startRecord(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_isPlaying(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_phoneNetInfo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getPhoneStateSig(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_setPvrEncryptionKey(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_WeChatShare(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_sdkDoForStr_C(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getDistanceByCoordinate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_weiXinLoad(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_callPhone(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_exitWithoutParam(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_getNetWorkType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_saveStoreChainData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_removeIosLocationTip(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlatformHelper_clearStoreChainData(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_JPacket_class;
extern JSObject *jsb_JPacket_prototype;

bool js_wb_JPacket_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_JPacket_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_JPacket(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_JPacket_end(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JPacket_parse(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JPacket_tostring(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JPacket_sefe_check(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JPacket_decodeStr(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JPacket_codeStr(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JPacket_JPacket(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CCTcpResponse_class;
extern JSObject *jsb_CCTcpResponse_prototype;

bool js_wb_CCTcpResponse_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_CCTcpResponse_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_CCTcpResponse(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_CCTcpResponse_release(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpResponse_parseDatta(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CCTcpClient_class;
extern JSObject *jsb_CCTcpClient_prototype;

bool js_wb_CCTcpClient_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_CCTcpClient_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_CCTcpClient(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_CCTcpClient_send_data(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_reset_response_queue(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_connect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_read_res_pb2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_read_res_pb3(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_write_from_string(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_disconnect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_data_req_pb3(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_read_res_pb(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_disconnect_req(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_create_request(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_connect_req(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_get(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_send_data_pb(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_reset_connect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_data_req_pb(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_write_from_string_pb3(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_put(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_data_req_pb2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_set_host_port(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_send_data_pb3(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_send_data_pb2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_create_response(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_isConnect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_sendCodeData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_write_from_string_pb2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_data_req(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_write_from_string_pb(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_setProtoType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_read_res(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_sendToAll(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCTcpClient_CCTcpClient(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_CCHttpAgent_class;
extern JSObject *jsb_CCHttpAgent_prototype;

bool js_wb_CCHttpAgent_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_CCHttpAgent_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_CCHttpAgent(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_CCHttpAgent_sendLogPost(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_setImageUrl(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_sendHttpUrlPost(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_sendHttpPost(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_setImageDownloadUrl(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_sendPayHttpPost(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent__makeMultiDir(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_sendAppStoreFinishHttpPost(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_setUidAndSkey(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_popPackets(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_httpImageCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_httpImagePostCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_getPacketData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_sendHttpImagePost(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_getUrl(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_deletHttpPacket(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_sendHttpImageWithUrl(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_setUrl(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_setImageUploadUrl(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_sendHttpImage(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_httpCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_CCHttpAgent_CCHttpAgent(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_BaseLayer_class;
extern JSObject *jsb_BaseLayer_prototype;

bool js_wb_BaseLayer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_BaseLayer_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_BaseLayer(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_BaseLayer_setMore_img(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setHead(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setPreByName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setPreView(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_removeToPreByName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setCanReturn(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_getSpriteHeight(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setTitle(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setReturn_img(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_removePre(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_onExit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setBackground(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_disappear(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setReturn_txt(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_setMore_txt(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_onKeyReleased(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_getHeadH(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_appear(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_BaseLayer_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ZJHModel_class;
extern JSObject *jsb_ZJHModel_prototype;

bool js_wb_ZJHModel_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_ZJHModel_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_ZJHModel(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_ZJHModel_matchEnterName(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_reLoginLoadGame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_requestPay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_listnerGameResum(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_setRoomData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_requestThirdPay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_roomToShareView(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_uploadMyLocation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_iosPurchaseResult(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_gotoVideo(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_setCurGameID(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_roomHearHttpRequest(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_roomToHall(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_initPhoneData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_setUserType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_moneyShowDeal(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_gotoGameLoad(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_toMatchHall(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_converPointTwoBit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_dealAppUpdate(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_getRoomData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_checkUploadMoblieContacts(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_randomThirdID(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_gotoRoomWithCode(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_hidePhoneNum(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_changeScreenSize(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_toMatchRoom(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_startRoomHeart(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_toGameHall(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_noticeGamePlayEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_gotoRoom(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_isOpenIPV6(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_listnerPaySucceed(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_hallToRoomV(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_checkGamePlayingError(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_toHall(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_setDiquCach(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_goldCovertStr2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_loadingImageResource(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_isYoukeLogin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_setPhoneAndPwd(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_isCanPay(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_hotUpdateGame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_checkNoRmb(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_checkNoMoney(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_hallToRoom(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_createTestMatchHall(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_GameResum(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_hallToRoomH(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_getStr(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ZJHModel_ZJHModel(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_Sound_class;
extern JSObject *jsb_Sound_prototype;

bool js_wb_Sound_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_Sound_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_Sound(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_Sound_playDNGameEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_playGameEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_PlayBgSound(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_playDNGameCardTypeEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_playEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_preLoadSound(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_preLoadEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_StopBgSound(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_loadEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_Sound_Sound(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_PlayerModel_class;
extern JSObject *jsb_PlayerModel_prototype;

bool js_wb_PlayerModel_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_PlayerModel_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_PlayerModel(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_PlayerModel_reset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlayerModel_release(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlayerModel_prepra2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlayerModel_prepra(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_PlayerModel_PlayerModel(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_JsUtils_class;
extern JSObject *jsb_JsUtils_prototype;

bool js_wb_JsUtils_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_JsUtils_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_JsUtils(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_JsUtils_onGameChangeEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_onPowerChangeEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_onChatStartEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_onIMEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_onChatStopEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_onChatEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_onJSModuleEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_resetJsVM(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_decodeBase64(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_getInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_initLoad(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_postNotifi(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_postNotifiStr(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_decodeVideoData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_postNotifiInt(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_runScript(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_JsUtils_encodeBase64(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomPublic_class;
extern JSObject *jsb_RoomPublic_prototype;

bool js_wb_RoomPublic_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomPublic_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomPublic(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomPublic_updateTimeLabel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_notificationGameStart(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_checkGameEnd(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_setMyVisible(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_checkEndRoomTip(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_powerSigChange(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_getCurrentTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_notificationPlayerNumber(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_getCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_setGameStatus(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_checkGameEndRepeat(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_refreshMenu(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_setCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_setRequestFlag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_setOnlineNumber(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_inviteShare(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_requestExit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_notificationGameResume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_notificationRoomStart(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_showPlayerList(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_buttonCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_menuCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_checkEndRoomTip_getData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomPublic_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomHEndTouPiao_class;
extern JSObject *jsb_RoomHEndTouPiao_prototype;

bool js_wb_RoomHEndTouPiao_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomHEndTouPiao_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomHEndTouPiao(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomHEndTouPiao_initWithJsonStr(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_updateTime(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_updateState(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_setCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_getCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_buttonCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_setDefaultTips(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHEndTouPiao_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_MsgModel_class;
extern JSObject *jsb_MsgModel_prototype;

bool js_wb_MsgModel_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_MsgModel_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_MsgModel(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_MsgModel_handler_cmd(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_sendText(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_goout_group(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_start(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_sendSound(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_notifyLogout(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_getData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_sendImg_group(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_notificationReflash(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_stop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_sendText_group(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_initAccountData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_join_group(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_doHeartbeat(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_sendImg(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_sendSound_group(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_MsgModel_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomChat2_class;
extern JSObject *jsb_RoomChat2_prototype;

bool js_wb_RoomChat2_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomChat2_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomChat2(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomChat2_hide(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_show(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_btnCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_notificationChat(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_initList(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_onTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_getRecordData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomChat2_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomHelpH_class;
extern JSObject *jsb_RoomHelpH_prototype;

bool js_wb_RoomHelpH_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomHelpH_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomHelpH(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomHelpH_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHelpH_onTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHelpH_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomHExitDialog_class;
extern JSObject *jsb_RoomHExitDialog_prototype;

bool js_wb_RoomHExitDialog_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomHExitDialog_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomHExitDialog(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomHExitDialog_show(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHExitDialog_buttonClicked(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHExitDialog_onTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHExitDialog_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHExitDialog_setCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHExitDialog_getCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHExitDialog_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomHExitDialog_RoomHExitDialog(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomRealTimeScore_class;
extern JSObject *jsb_RoomRealTimeScore_prototype;

bool js_wb_RoomRealTimeScore_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomRealTimeScore_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomRealTimeScore(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomRealTimeScore_hide(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_inviteFriend(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_show(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_onTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_myInit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_addLayerTouchEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_getData(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRealTimeScore_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomRule_class;
extern JSObject *jsb_RoomRule_prototype;

bool js_wb_RoomRule_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomRule_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomRule(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomRule_initHelpWeb(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRule_selectBtnDraw(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRule_initHelp(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRule_onTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRule_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRule_createRichText(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRule_buttonCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomRule_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_RoomSettingH_class;
extern JSObject *jsb_RoomSettingH_prototype;

bool js_wb_RoomSettingH_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_RoomSettingH_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_RoomSettingH(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_RoomSettingH_initSetting(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomSettingH_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomSettingH_buttonClicked(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomSettingH_onTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_RoomSettingH_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_EndRoomTipsDialog_class;
extern JSObject *jsb_EndRoomTipsDialog_prototype;

bool js_wb_EndRoomTipsDialog_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_EndRoomTipsDialog_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_EndRoomTipsDialog(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_EndRoomTipsDialog_init1(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_onTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_buttonClicked(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_setCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_init2(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_getCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_EndRoomTipsDialog_EndRoomTipsDialog(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_SoundModel_class;
extern JSObject *jsb_SoundModel_prototype;

bool js_wb_SoundModel_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_SoundModel_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_SoundModel(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_SoundModel_reset(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_SoundModel_clear(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_SoundModel_onChatStopEvent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_SoundModel_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_SoundModel_checkNext(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_SoundModel_addSound(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_SoundModel_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_AudioMgr_class;
extern JSObject *jsb_AudioMgr_prototype;

bool js_wb_AudioMgr_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_AudioMgr_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_AudioMgr(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_AudioMgr_preloadBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_stopAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_end(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_playBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_setFinishCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_setIsPlayEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_stopBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_pauseBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_preloadEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_resumeBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_resumeAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_playEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_getIsPlayMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_setEffectsVolume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_stopEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_setBackgroundMusicVolume(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_pauseAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_setIsPlayMusic(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_getIsPlayEffect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_destroyInstance(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_AudioMgr_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_DataBase_class;
extern JSObject *jsb_DataBase_prototype;

bool js_wb_DataBase_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_DataBase_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_DataBase(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_DataBase_insert(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_DataBase_update(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_DataBase_select(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_DataBase_getInstance(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ChatFriendsBottom_class;
extern JSObject *jsb_ChatFriendsBottom_prototype;

bool js_wb_ChatFriendsBottom_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_ChatFriendsBottom_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_ChatFriendsBottom(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_ChatFriendsBottom_checkContent(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_setBottomType(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_btnCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_setCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_editBoxEditingDidBegin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_editBoxReturn(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_editBoxTextChanged(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_getCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_editBoxEditingDidEnd(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_faceCallback(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_scollToView(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_notificationReflash(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatFriendsBottom_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *jsb_ChatRecordEffect_class;
extern JSObject *jsb_ChatRecordEffect_prototype;

bool js_wb_ChatRecordEffect_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_wb_ChatRecordEffect_finalize(JSContext *cx, JSObject *obj);
void js_register_wb_ChatRecordEffect(JSContext *cx, JS::HandleObject global);
void register_all_wb(JSContext* cx, JS::HandleObject obj);
bool js_wb_ChatRecordEffect_recordError(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_recordCancel(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_onExit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_recordStart(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_recordOver(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_recordIng(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_playNoFile(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_recordStop(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_recordTimeOut(JSContext *cx, uint32_t argc, jsval *vp);
bool js_wb_ChatRecordEffect_create(JSContext *cx, uint32_t argc, jsval *vp);

#endif // __wb_h__
