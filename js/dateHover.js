document.querySelectorAll('.isoDate').forEach((element) => {
  const isoDate = element.getAttribute('dataIso');
  const date = new Date(isoDate);

  // Format the date as "DD Month YYYY" (e.g., "13 February 2016")
  const options = { day: 'numeric', month: 'long', year: 'numeric' };
  const localizedDate = date.toLocaleDateString('en-US', options);

  // Set the localized date as a data attribute for the tooltip
  element.setAttribute('data-localized-date', localizedDate);
});
