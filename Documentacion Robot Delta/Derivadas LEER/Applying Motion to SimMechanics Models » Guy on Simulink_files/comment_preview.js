// 'i' popover on comment form
$('.js-code-example').popover({
	html : true,
	trigger : 'click',
	placement : 'top',
	content : function() {
		return $('#code_fragments').html();
	}
});


// finds input value and places in preview modal window
$('input, textarea').keyup(function(){
	var input_value = $(this).val(),
		input_name  = $(this).attr('id'),
		preview_text  = 'preview_'+input_name;
// The server of Blogs is Linux so use \n as line break
	$('.'+preview_text).html(input_value.replace(/\n/g, '<br/>'));
	
});

// hides/shows the comment preview box on the blog post page
$('.js-preview-toggle').click(function() {
     var txt_button = $('#commentPreview').is(':visible') ? 'show' : 'hide';
	 
     $('#commentPreview').slideToggle();
     $(".js-preview-toggle").text(txt_button);

});


//* IE Placeholder text fix, courtesy: http://www.jacklmoore.com/notes/form-placeholder-text/
function add() {
	if($(this).val() === ''){
    	$(this).val($(this).attr('placeholder')).addClass('placeholder');
	}
}

function remove() {
	if($(this).val() === $(this).attr('placeholder')){
    	$(this).val('').removeClass('placeholder');
	}
}

// Create a dummy element for feature detection
if (!('placeholder' in $('input')[0])) {

	// Select the elements that have a placeholder attribute
	$('input[placeholder], textarea[placeholder]').blur(add).focus(remove).each(add);

	// Remove the placeholder text before the form is submitted
    $('form').submit(function(){
    	$(this).find('input[placeholder], textarea[placeholder]').each(remove);
    });

}
//*/