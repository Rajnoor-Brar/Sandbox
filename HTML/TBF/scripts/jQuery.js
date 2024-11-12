///For Good-Looking Experience In Tabs and Mobile by prevent header section from chaning height dynamicaly due to change in Viewport when address bar hides after scolling.This is done by converting relative height-ViewportHeight(VH) into fixed height(px)
///When the Element gains a specific height with their relative height measurements (VH)|(%), jQuery get same height in px and assign this non-changable height to the elements.and some top margins are also changed in this way
 
$(document).ready(function(){
	var windowwidth = $(window).width();
	var windowheight = $(window).height();
	////
	var headbackheight = $('#headback').height();
	var brarheight = $('#brarhead').height();
	var tabheight = $('.tab').height();
	
	/*--------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>---------*/
	if (windowwidth < windowheight){
		$('#headback').css('height', headbackheight + 'px');
		$('#brarhead').css('height', brarheight + 'px');
		$('.tab').css('height', tabheight + 'px');
		$('.tab').css({'top':headbackheight + 'px', position:'fixed'});
		$('.subtabs').css({'top':headbackheight + tabheight + 'px', 'position':'fixed' , 'bottom':''});
	}
	/*----------------------------------------------------------------*/
	else if (windowwidth > windowheight){
		$('#headback').css('height', headbackheight + 'px');
		$('#brarhead').css('height', brarheight + 'px');
		$('.tab').css('height', tabheight + 'px');
		$('.tab').css({'top':headbackheight + 'px', position:'fixed'});
		$('.subtabs').css({'top':headbackheight + tabheight + 'px', 'position':'fixed' ,'bottom':'0px'});
	}
	/*---------------------------------------------------------------------------------*/
	/*-------To_Be_Executed_whenever_device_changes_orientation-----------------------*/
	
	$(window ).on("orientationchange", function( event ) {
		var windowwidth = $(window).width();
		var windowheight = $(window).height();
		var headbackheight = $('#headback').height();
		var brarheight = $('#brarhead').height();
		var tabheight = $('.tab').height();
		/*---------------------------------------------*///Reset Values Changed By jQuery previously
		$('#headback').css('height','');
		$('#brarhead').css('height','');
		$('.tab').css('height','');
		$('.tab').css({'top':'', 'position':''});
		$('.subtabs').css({'top':'', 'position':'' ,'height':''});
		/*----------------------------------------------------------------*///Assign fixed values based on orientation 
		if (windowwidth < windowheight){
			$('#headback').css('height', headbackheight + 'px');
			$('#brarhead').css('height', brarheight + 'px');
			$('.tab').css('height', tabheight + 'px');
			$('.tab').css({'top':headbackheight + 'px', position:'fixed'});
			$('.subtabs').css({'top':headbackheight + tabheight + 'px', 'position':'fixed' , 'bottom':''});
		}
		/*----------------------------------------------------------------*/
		else if (windowwidth > windowheight){
			$('#headback').css('height', headbackheight + 'px');
			$('#brarhead').css('height', brarheight + 'px');
			$('.tab').css('height', tabheight + 'px');
			$('.tab').css({'top':headbackheight + 'px', position:'fixed'});
			$('.subtabs').css({'top':headbackheight + tabheight + 'px', 'position':'fixed' ,'bottom':'0px'});
		}
		
	});


});