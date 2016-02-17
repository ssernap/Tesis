// Below: responsive UDP (?type=shadow&shadow_version=lightbox)

$(document).ready(function() {
	$('#cc_link').popover();
});

// namespace for everything global related to BC and captions
var BCL = {};
		
BCL.onTemplateLoad = function(experienceID)  {
	BCL.player = brightcove.api.getExperience(experienceID);
	BCL.APIModules = brightcove.api.modules.APIModules;
}

BCL.onTemplateReady = function(evt) {
	BCL.videoPlayer = BCL.player.getModule(BCL.APIModules.VIDEO_PLAYER);
	BCL.experienceModule = BCL.player.getModule(BCL.APIModules.EXPERIENCE);
	BCL.captionsModule = BCL.player.getModule(BCL.APIModules.CAPTIONS);
		// do a first run of the subtitles function, with the captionsLanguage var defined initially
		if (captionsPath != "") {
			if (captionsLanguage == "en") {
				BCL.showSubTitles("");
			} else {
				BCL.showSubTitles(captionsLanguage);	
			}
			// add success/error listeners for captions load
			BCL.captionsModule.addEventListener(brightcove.api.events.CaptionsEvent.DFXP_LOAD_SUCCESS, BCL.onDFXPLoadSuccess);
			BCL.captionsModule.addEventListener(brightcove.api.events.CaptionsEvent.DFXP_LOAD_ERROR, BCL.onDFXPLoadError);
		}
	
	BCL.videoPlayer.getCurrentRendition(function(renditionDTO) {
		if (renditionDTO) {
			calulateNewPercentage(renditionDTO.frameWidth, renditionDTO.frameHeight);
		} else {
			videoPlayer.addEventListener(brightcove.api.events.MediaEvent.PLAY, function(event) {
				calulateNewPercentage(event.media.renditions[0].frameWidth, event.media.renditions[0].frameHeight);	 
			});
		}
	});
	var evt = document.createEvent('UIEvents');
	evt.initUIEvent('resize',true,false,0);
	window.dispatchEvent(evt);
	BCL.videoPlayer.play();
}

// set up captions
BCL.showSubTitles = function(whichLanguage) {
	// set a flag to remember that subtitles are on
	BCL.subTitlesOn = true;
	// keep track of the language
	BCL.language = whichLanguage;
	// get the captions
	BCL.captionsModule.loadDFXP(captionsPath,bcVideoId);
}

// captions load success handler
BCL.onDFXPLoadSuccess = function(event) {
	// need to set the language based on selected language
	BCL.captionsModule.setLanguage(BCL.language);
}

// captions load error handler
BCL.onDFXPLoadError = function(event) {
	// Null function but would otherwise have error handler console references here
}

	
function calulateNewPercentage(width,height) {
	var newPercentage = ((height / width) * 100) + "%";
	document.getElementById("bc-outer-container").style.paddingBottom = newPercentage;
}

window.onresize = function(evt) {
	var resizeWidth = $(".BrightcoveExperience").width(),
	resizeHeight = $(".BrightcoveExperience").height();
	if (BCL.experienceModule.experience.type == "html"){
		BCL.experienceModule.setSize(resizeWidth, resizeHeight)
	}
}
			
// Above: responsive UDP (?type=shadow&shadow_version=lightbox)			