package com.ihuizhi.club.qp;

import org.json.JSONException;
import org.json.JSONObject;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.util.Log;
import android.widget.Toast;

import com.rwhz.app.MainActivity;
import com.rwhz.app.MainListener;
import com.rwhz.jni.MiscHelper;
import com.rwhz.zjh.HuiZhi_GameCenter;
import com.rwhz.zjh.pay.HuiZhi_PayRequest;
import com.rwhz.zjh.pay.VG_PayCallback;
import com.rwhz.zjh.vo.VG_PayBean;

public class StartActivity extends Activity implements MainListener
{
	public static StartActivity app = null;
	
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		MiscHelper.getWebIntent(getIntent());
		
		if (app != null)
		{
			finish();
			return;
		}
		
		app = this;
		
		HuiZhi_GameCenter.getInstance().initSDK(this);
		
		MiscHelper.listener = this;
		Intent intent = new Intent(this,MainActivity.class);
		startActivity(intent);
		finish();
	}
	
	@Override
	protected void onNewIntent(Intent intent) {
		super.onNewIntent(intent);
		setIntent(intent);
		MiscHelper.getWebIntent(intent);
	}
	
	@Override
	public String sdkDoForStr(String str, String data) {
		return "";
	}

	@Override
	public void sdkDoForVoid(String str, String data) {
		
		if (str.equals("requestPay"))
		{
			try {
				JSONObject obj = new JSONObject(data);
		        long payChannelId = 0L;
		        double price = 0;
		        String orderId = null;
		        String tradeName = null;
		        String backUrl = null;
		        String userId = null;
	            backUrl = obj.getString("backUrl");
	            userId = obj.getString("userId");
	            price = obj.getDouble("reqFee");
	            orderId = obj.getString("orderId");
	            tradeName = obj.getString("tradeName");
	            int payType = obj.getInt("payType");//tag :0�� ���п� 1��΢��֧�� 2:֧����
	            if (payType == 0)
	            {
	            	payChannelId = 1000200010000000L;
	            }
	            else if (payType == 1)
	            {
	            	payChannelId = 1000200190000001L;
	            }
	            else if (payType == 2)
	            {
	            	payChannelId = 1000200020000000L;
	            }

	            HuiZhi_PayRequest payRequest = new HuiZhi_PayRequest();
	            payRequest.setBackEndUrl(backUrl); // ֧���������ص���ַ

//	    		payRequest.setReqFee("0.01"); // ����֧�����(��λ:Ԫ)
	            payRequest.setReqFee(String.valueOf(price)); // ����֧�����(��λ:Ԫ)

	            payRequest.setTradeDesc(tradeName); // ��������(����С��255���ֽ�)
	            payRequest.setTradeName(tradeName); // ��������(����С��255���ֽ�)
	            payRequest.setPayerId(userId); // ���idֵ
	            payRequest.setExtInfo(orderId); // ֧��͸��������������͸��������
	            payRequest.setQn(MiscHelper.getMMChannel());
	            payRequest.setPayway(payChannelId);

	            HuiZhi_GameCenter.getInstance().startPay(payRequest, MainActivity.app, new VG_PayCallback() {
	                @Override
	                public void onPayCallback(int retCode, VG_PayBean payBean) {
	                    if (retCode == 0) {
	                        Toast.makeText(MainActivity.app, "֧���ɹ�", Toast.LENGTH_SHORT).show();
	                        JSONObject rsObj = new JSONObject();
	                        try {
	                            rsObj.put("code", 0); //�����ύ�ɹ�
	                            rsObj.put("message", "֧���ɹ�");
	                            MiscHelper.nativeJava2C("cz_succ_notify", "");
	                        } catch (JSONException e) {
	                            e.printStackTrace();
	                        }
	                    }else {
	                    }
	                }

	            });
			} catch (JSONException e) {
				e.printStackTrace();
			}
		}
	}

	@Override
	public int sdkDoForInt(String str, String data) {
		return 0;
	}

	@Override
	public void main_onDestroy() {
		HuiZhi_GameCenter.getInstance().quit(MainActivity.app);
	}

	@Override
	public void main_onResume() {
		
	}

	@Override
	public void main_onPause() {
		
	}

	@Override
	public void onMyActivityResult(int requestCode, int resultCode, Intent data) {
		
	}
	
}
